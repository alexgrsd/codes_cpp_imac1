#include <iostream>
using namespace std;

int main(){

    float nb_sac_patates, nb_carottes, nb_salades;
    cout << "Entrez le nombre de sacs de patates: ";
    cin >> nb_sac_patates;
    cout << endl << "entrez le nombre de carottes: ";
    cin >> nb_carottes; 
    cout << endl << "entrez le nombre de salade: ";
    cin >> nb_salades;
    cout << endl;

    float prix_pomme_de_terre {2.0f * 1.5f * nb_sac_patates};
    float prix_carottes {0.150f * 2.5f * nb_carottes};
    float prix_salades {nb_salades * 1.2f};

    float prix_total {prix_carottes + prix_pomme_de_terre + prix_salades};

    cout << nb_sac_patates << " patates : " << prix_pomme_de_terre << "€" << endl;
    cout << nb_carottes << " carottes : " << prix_carottes << "€" << endl;
    cout << nb_salades << " salades : " << prix_salades << "€" << endl;

    cout << "prix total : " << prix_total << "€" << endl;

}