//
// Created by jser on 28/01/2022.
//

#include "lc_commandes.h"

lc_commandes* premierecommande(std::string clients_sources, std::string clients_destinataires, std::string biscuit) {
    auto* temp = new lc_commandes;
    temp->clients_sources = clients_sources;
    temp->clients_destinataires = clients_destinataires;
    temp->biscuits = biscuit;
    temp->suivant = nullptr;
    return temp;
}

lc_commandes* ajoutercommande(std::string clients_sources, std::string clients_destinataires, std::string biscuit,
                              lc_commandes *suiv) {
    auto* temp = new lc_commandes;
    temp->clients_sources = clients_sources;
    temp->clients_destinataires = clients_destinataires;
    temp->biscuits = biscuit;
    temp->suivant = suiv;
    return temp;
}

std::string lire_commandes(lc_commandes *tete) {
    std::cout << "debut lecture" << std::endl;
    std::string temp;
    temp += tete->clients_sources + "\n";
    temp += tete->clients_destinataires + "\n";
    temp += tete->biscuits + "\n";

    lc_commandes* commalire = tete->suivant;

    while (commalire){
        std::cout << "lecture du noeud" << commalire << std::endl;
        temp += commalire->clients_sources + "\n";
        temp += commalire->clients_destinataires + "\n";
        temp += commalire->biscuits + "";
        temp += "&\n";
        commalire = commalire->suivant; //yolo
    }

    return temp;
}


std::string recherche_commande(lc_commandes *tete, std::string client) {
    std::string temp;
    temp = "Commandes effectuees par : " + client + "\n";
    while(tete->suivant != nullptr){
        if(tete->clients_destinataires == client)
            temp += tete->biscuits;
        tete = tete->suivant;
    }
    temp += "&\n";
    return temp;
}
//FONCTION A FINIR
std::string recherche_biscuit(lc_commandes *tete, std::string client) {
    std::string temp;
    while(tete->suivant != nullptr){
        //do things
        tete = tete->suivant;
    }
    return temp;
}



