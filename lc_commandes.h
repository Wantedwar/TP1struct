//
// Created by jser on 28/01/2022.
//

#ifndef UNTITLED4_LC_COMMANDES_H
#define UNTITLED4_LC_COMMANDES_H
#include <iostream>

/*da poop
class lc_commandes {
    std::string clients_sources;
    std::string clients_destinataires;
    std::string biscuits; // ?? ou liste/vecteur ?


};
*/

struct lc_commandes{
    std::string clients_sources;
    std::string clients_destinataires;
    std::string biscuits;
    lc_commandes* suivant;
};
lc_commandes* premierecommande(std::string clients_sources, std::string clients_destinataires, std::string biscuit);
lc_commandes* ajoutercommande(std::string clients_sources, std::string clients_destinataires, std::string biscuit, lc_commandes* suiv);
std::string lire_commandes(lc_commandes* premiernoeud);


/*fonctions jsp
 *creer premier *
 * ajouter      *
 * lire         *
 * supprimer    *
 * rechercher
 * vider
*/

#endif //UNTITLED4_LC_COMMANDES_H
