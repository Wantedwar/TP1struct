//
// Created by jser on 09/02/2022.
//

#include "cool_utilities.h"

//WARNING SHIT CODE AHEAD
/*
void ouvrir_charger(lc_clients* dclient, lc_commandes* dcommande, string fclient, string fcommandes) {
    string client, commandes, buffer,nomduclient, rue;
    int numero;

    ifstream infile;
    infile.open(fclient);

    getline(infile,nomduclient);
    getline(infile,buffer);
    numero = stoi(buffer);
    getline(infile,rue);
    //REMPLACER NOM TETE CLIENT PAR PREMIER NOEUD => TETE = DERNIER NOEUD
    lc_clients* pclient = premiernoeud(nomduclient, numero, rue);//définitivement pas stupide

    //cout << lire_tout_clients(tete_clients);//checkkk ptdr
    dclient = pclient;//pour l'instant le dernier client est aussi le premier

    while (getline(infile,nomduclient)) {
        getline(infile,buffer);
        numero = stoi(buffer);
        getline(infile,rue);
        //if (nomduclient && numero && rue) <- check si les variables sont remplies ?
        dclient = ajouternoeud(nomduclient, numero, rue,dclient);
        //cout << "dernier noeud" << dclient << endl;
    }

    infile.close();//pas sur mais au cas où tu sais
    infile.open(fcommandes);

}*/

void ouvrir_charger(lc_clients*& dclient, lc_commandes*& dcommande, string fclient, string fcommandes) {//do the funny
    string buffer1, buffer2, buffer3, buffer4;
    int numero;
    cout << "debut chargement" << endl;
    ifstream infile;
    infile.open(fclient);

    getline(infile, buffer1);
    getline(infile, buffer2);
    numero = stoi(buffer2);
    getline(infile, buffer3);
    //REMPLACER NOM TETE CLIENT PAR PREMIER NOEUD => TETE = DERNIER NOEUD
    dclient = premiernoeud(buffer1, numero, buffer3);//définitivement pas stupide

    cout << "Noeud cree : " << dclient << endl;

    while (getline(infile, buffer1)) {
        getline(infile, buffer2);
        numero = stoi(buffer2);
        getline(infile, buffer3);
        //if (nomduclient && numero && rue) <- check si les variables sont remplies ?
        dclient = ajouternoeud(buffer1, numero, buffer3, dclient);
        cout << "Noeud cree : " << dclient << endl;

    }

    infile.close();//pas sur mais au cas où tu sais
    infile.open(fcommandes);
    getline(infile, buffer1);
    getline(infile, buffer2);
    while(getline(infile,buffer3) && buffer3.compare("&")){ //wehehe

        buffer4 += buffer3 + "\n"; //solution pansement => on lit pas le type de biscuit et la quantité séparemment
        //idée : 2 vecteurs biscuits et type, faire correspondre les numéros=>un peu sale mais bon
        //à voir
    }
    dcommande = premierecommande(buffer1,buffer2,buffer4);

    while(getline(infile,buffer1)){
        getline(infile, buffer2);
        buffer4 = "";
        while(getline(infile,buffer3) && buffer3.compare("&")){ //wehehe
            //cout << buffer3 << endl;
            buffer4 += buffer3 + "\n"; //solution pansement => on lit pas le type de biscuit et la quantité séparemment
            //idée : 2 vecteurs biscuits et type, faire correspondre les numéros=>un peu sale mais bon
            //à voir
        }
        dcommande = ajoutercommande(buffer1,buffer2,buffer4,dcommande);

    }

    infile.close();
}


void sauvegarder_LCs(lc_clients* tclient, lc_commandes* tcommande, string fclient, string fcommandes){
    ofstream outfile;
    outfile.open(fclient);
    outfile << lire_tout_clients(tclient);
    outfile.close();
    outfile.open(fcommandes);
    outfile << lire_commandes(tcommande);
    outfile.close();
}

void supprimmer(lc_clients *&tclient, lc_commandes *&tcommande, string client) {
    sup_client(client,tclient);
}
