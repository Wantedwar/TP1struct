//
// Created by jser on 28/01/2022.
//

#include "lc_clients.h"

#include <utility>
/*
lc_clients* lc_clients::nouvelle(std::string nom_du_client, int numero, std::string rue, lc_clients* prec) {
    lc_clients* truc = new lc_clients;
    truc->nom_du_client = std::move(nom_du_client);
    truc->numero = numero;
    truc->rue = std::move(rue);
    precedent = prec;
//j'ai merdé => pas un objet donc jsp, je crois que j'ai fait de l'objet
    return truc;
}
*/

/*fonctions jsp
 *creer premier *
 * ajouter      *
 * lire         *
 * supprimer    *
 * rechercher
 * vider
*/


lc_clients *premiernoeud(std::string nom_du_client, int numero, std::string rue) {
    auto* noeud = new lc_clients;
    noeud->nom_du_client = nom_du_client;
    noeud->numero = numero;
    noeud->rue = rue;
    noeud->suivant = nullptr;
    return noeud;
}

lc_clients* ajouternoeud(std::string nom_du_client, int numero, std::string rue, lc_clients* suiv){

    auto* noeud = new lc_clients;
    noeud->nom_du_client = nom_du_client;
    noeud->numero = numero;
    noeud->rue = rue;
    noeud->suivant = suiv;
    return noeud;
}


std::string lire_tout_clients(lc_clients* tclients) {
    std::cout << "debut lecture" << std::endl;
    std::string temp;
    temp += tclients->nom_du_client + "\n";
    temp += std::to_string(tclients->numero) + "\n";
    temp += tclients->rue + "\n";

    lc_clients* noeudalire = tclients->suivant;

        while (noeudalire){
            std::cout << "lecture du noeud " << noeudalire << std::endl;
            temp += noeudalire->nom_du_client + "\n";
            temp += std::to_string(noeudalire->numero) + "\n";
            temp += noeudalire->rue + "\n";
            noeudalire = noeudalire->suivant; //yolo
        }

    return temp;


}

void sup_client(std::string client, lc_clients *tete) {
    lc_clients* ccourant, *csuivant;
    ccourant = tete;

    if(tete->nom_du_client == client){
        //cvuivant = tete->suivant;
        //delete csuivant;
        tete = ccourant->suivant;
        return;
    }
    while(ccourant->suivant){//changer la condition parce qu'on check pas la dernière case
        if (ccourant->suivant->nom_du_client == client){
            ccourant->suivant = ccourant->suivant->suivant;
            return;
        }
    }

}
