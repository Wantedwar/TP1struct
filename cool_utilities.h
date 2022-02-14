//
// Created by jser on 09/02/2022.
//

#include "lc_clients.h"
//#include "lc_clients.cpp"
#include "lc_commandes.h"
//#include "lc_commandes.cpp"
#include <iostream>
#include <fstream>
#include <string>
#ifndef TP1STRUCT_COOL_UTILITIES_H
#define TP1STRUCT_COOL_UTILITIES_H

using namespace std;

void ouvrir_charger(lc_clients*& pclient, lc_commandes*& pcommande, string client,string commandes);
void sauvegarder_LCs(lc_clients* tclient, lc_commandes* tcommande, string fclient, string fcommandes);
//supprimer client et commandes associées
void supprimmer(lc_clients*& tclient, lc_commandes*& tcommande, string client);
//ajouter client => ajouternoeud(std::string nom_du_client, int numero, std::string rue, lc_clients* suiv);
//ajouter commande => ajoutercommande(std::string clients_sources, std::string clients_destinataires, std::string biscuit, lc_commandes* suiv); + check si client existe pas déjà
//afficher commande client => parcourir
//afficher biscuit le plus populaire



#endif //TP1STRUCT_COOL_UTILITIES_H
