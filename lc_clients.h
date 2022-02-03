//
// Created by jser on 28/01/2022.
//

#ifndef UNTITLED4_LC_CLIENTS_H
#define UNTITLED4_LC_CLIENTS_H
#include <iostream>



class lc_clients {
public :
    std::string nom_du_client;
    int numero;
    std::string rue;

    lc_clients* suivante;
    lc_clients* remplirliste(std::string nom_du_client, int numero, std::string rue);
    //fonctions jsp

};


#endif //UNTITLED4_LC_CLIENTS_H
