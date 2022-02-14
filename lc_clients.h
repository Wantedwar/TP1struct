//
// Created by jser on 28/01/2022.
//

#ifndef UNTITLED4_LC_CLIENTS_H
#define UNTITLED4_LC_CLIENTS_H
#include <iostream>

/*

class lc_clients {
public :
    std::string nom_du_client;
    int numero;
    std::string rue;

    lc_clients* precedent;
    lc_clients* nouvelle(std::string nom_du_client, int numero, std::string rue);
    /*fonctions jsp
     * ajouter
     * supprimer
     * rechercher
     * vider
     *

};
*/

struct lc_clients{
    std::string nom_du_client;
    int numero;
    std::string rue;
    lc_clients* suivant;
};
lc_clients *premiernoeud(std::string nom_du_client, int numero, std::string rue);
lc_clients* ajouternoeud(std::string nom_du_client, int numero, std::string rue, lc_clients* suiv);
std::string lire_tout_clients(lc_clients* derniernoeud);
void sup_client(std::string client, lc_clients* tete);


#endif //UNTITLED4_LC_CLIENTS_H
