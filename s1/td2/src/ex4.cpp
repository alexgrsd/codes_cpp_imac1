#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    int nb_jours;
    cin >> nb_jours;
    int nb_siecle { nb_jours / 3600 };
    int nb_annee { (nb_jours % 3600) / 360 };
    int nb_mois { ((nb_jours % 3600) % 360) / 30 };
    int nb_semaines { (((nb_jours % 3600) % 360) % 30) / 7 };
    int nb_reste_jours { (((nb_jours % 3600) % 360) % 30) % 7 };
    cout << nb_siecle << " siecles, " << nb_annee << " annees, " << nb_mois << " mois, " << nb_semaines << " semaines et " << nb_reste_jours << " jours." << endl;
    return 0;

}