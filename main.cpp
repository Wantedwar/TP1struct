#include <iostream>
#include <fstream>
#include <string>
#include "lc_clients.h"
//#include "lc_clients.cpp"
#include "lc_commandes.h"
//#include "lc_commandes.cpp"
//#include <sstream>

using namespace std;


int main () {

    string client, commandes, buffer,nomduclient, rue;
    int numero;
    lc_clients* derniernoeud;

    ifstream infile;
    ofstream outfile;
    infile.open("PRESIDENTS_CLIENTS.txt");

    cout << "LECTURE CLIENT" << endl;
    /*
    getline(infile,buffer);
    nomduclient = buffer;
    getline(infile,buffer);
    numero = stoi(buffer);
    getline(infile,buffer);
    rue = buffer;*/
    getline(infile,nomduclient);
    getline(infile,buffer);
    numero = stoi(buffer);
    getline(infile,rue);
    //REMPLACER NOM TETE CLIENT PAR PREMIER NOEUD => TETE = DERNIER NOEUD
    lc_clients* tete_clients = premiernoeud(nomduclient, numero, rue);//définitivement pas stupide

    //cout << lire_tout_clients(tete_clients);
    derniernoeud = tete_clients;


    while (getline(infile,nomduclient)) {//ptet if buffer == "&"
        //client += buffer + "\n";
        /*
        getline(infile,buffer);
        nomduclient = buffer;
        getline(infile,buffer);
        numero = stoi(buffer);
        getline(infile,buffer);
        rue = buffer;
        */
        getline(infile,buffer);
        numero = stoi(buffer);
        getline(infile,rue);

        //if (nomduclient && numero && rue) <- check si les variables sont remplies ?
        derniernoeud = ajouternoeud(nomduclient, numero, rue,derniernoeud);
        cout << "dernier noeud" << derniernoeud << endl;
    }

    cout << lire_tout_clients(derniernoeud) << endl;

    cout << "LECTURE COMMANDES" << endl;

    //ajouter fonctions de sauvegarde => lire puis écrire à partir du string

    infile.close();
/*
    infile.open("PRESIDENTS_COMMANDES.txt");





    while (getline(infile,buffer)) {//pb lire trois données d'affilées et les balancer dans la fonction
        commandes += buffer + "\n";
        //cout << data1 << endl;

        //remplir liste chainee ici
    }

    cout << client;
    cout << commandes;

    infile.close();
*/

    outfile.open("PRESIDENTS_CLIENTS.txt");
    outfile << lire_tout_clients(derniernoeud);
    outfile.close();
    outfile.open("PRESIDENTS_COMMANDES.txt");
    //outfile << lire_commandes(dernierecommande);
    outfile.close();

    return 0;
}
