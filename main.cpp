#include "cool_utilities.h"

using namespace std;


int main () {
    string buffer;//this one is really buff
    ifstream infile;
    auto* tete_clients = new lc_clients;
    auto* tete_comms = new lc_commandes;
    ouvrir_charger(tete_clients, tete_comms, "PRESIDENTS_CLIENTS.txt", "PRESIDENTS_COMMANDES.txt");
    //sauvegarder_LCs(tete_clients, tete_comms, "PRESIDENTS_CLIENTS.txt", "PRESIDENTS_COMMANDES.txt");
    //infile.open("PRESIDENTS_TRANSACTIONS.txt");
    //get(infile,buffer);
    cout << recherche_commande(tete_comms,"James_Garfield");

    return 0;
}
