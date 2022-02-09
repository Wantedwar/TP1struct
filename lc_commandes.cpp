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

std::string lire_commandes(lc_commandes *dernierecommande) {
    std::cout << "debut lecture" << std::endl;
    std::string temp;
    temp += dernierecommande->clients_sources + "\n";
    temp += dernierecommande->clients_destinataires + "\n";
    temp += dernierecommande->biscuits + "\n";

    lc_commandes* commalire = dernierecommande->suivant;

    while (commalire){
        std::cout << "lecture du noeud" << commalire << std::endl;
        temp += commalire->clients_sources + "\n";
        temp += commalire->clients_destinataires + "\n";
        temp += commalire->biscuits + "\n";
        temp += "&`\n";
        commalire = commalire->suivant; //yolo
    }

    return temp;
}
