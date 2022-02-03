#include <iostream>
#include <fstream>
#include <string>
#include "lc_clients.h"
#include "lc_commandes.h"

using namespace std;

int main () {

    string client, commandes, buffer;

    ifstream infile;
    infile.open("PRESIDENTS_CLIENTS.txt");

    cout << "LECTURE CLIENT" << endl;


    while (getline(infile,buffer)) {
        //cout << buffer << endl;
        client += buffer + "\n";
        //remplir liste chainee ici
    }

    cout << "LECTURE COMMANDES" << endl;

    infile.close();

    infile.open("PRESIDENTS_COMMANDES.txt");


    while (getline(infile,buffer)) {
        commandes += buffer + "\n";
        //cout << data1 << endl;

        //remplir liste chainee ici
    }

    cout << client;
    cout << commandes;

    infile.close();


    return 0;
}