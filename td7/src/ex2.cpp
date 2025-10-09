#include <iostream>
#include <string>
#include <random>

using namespace std;

struct Pokemon {
    string name;
    int vitesse, attaque, points_de_vie;
};

void attque(const Pokemon &attaquant, Pokemon &victime){
    if (attaquant.points_de_vie == 0){
        cout << attaquant.name << " est déjà KO, il ne peut pas attaquer." << endl;
        return;
    } // si le pokémon est déjà KO, il ne peut pas attaquer
    victime.points_de_vie -= attaquant.attaque;
    if (victime.points_de_vie < 0) victime.points_de_vie = 0; // pour éviter les points de vie négatifs 
    cout << attaquant.name << " attaque, il reste " << victime.points_de_vie << " points de vie à " << victime.name << endl;
};

int check_vitesse (const Pokemon &Poke1, const Pokemon &Poke2){
    if (Poke1.vitesse > Poke2.vitesse) return 0;
    else if (Poke2.vitesse > Poke1.vitesse) return 1;
    else return rand()%2;
}

int combat (Pokemon &Poke1, Pokemon &Poke2, int &tour_actuel){

    srand(time(NULL));
    int tour {check_vitesse(Poke1, Poke2)};

    while (Poke1.points_de_vie > 0 && Poke2.points_de_vie > 0){
        cout << endl << "Tour " << tour_actuel << " : " << endl;
        if (tour == 0){
            attque(Poke1, Poke2);
            attque(Poke2, Poke1);
        }
        else {
            attque(Poke2, Poke1);
            attque(Poke1, Poke2);
        }
        tour_actuel++;
    }
    if (Poke2.points_de_vie == 0){
        return 0; // le pokemon 1.a gagné
    } 
    else {
        return 1; // le pokemon 2 a gagné
    }
}

struct Dresseur {
    string name;
    Pokemon pokemons[3];
};


void combat (Dresseur &dress1, Dresseur &dress2){
    int pokemon1 {0}; // index des pokémons actuels utilisés par les dresseurs
    int pokemon2 {0}; 

    cout << dress1.name << " envoie " << dress1.pokemons[pokemon1].name << " au combat !" << endl;
    cout << dress2.name << " envoie " << dress2.pokemons[pokemon2].name << " au combat !" << endl;

    int tour_actuel {0};

    while (dress1.pokemons[2].points_de_vie > 0 && dress2.pokemons[2].points_de_vie >0){
        if (dress1.pokemons[pokemon1].points_de_vie == 0){
            cout << dress1.pokemons[pokemon1].name << " est KO !" << endl;
            pokemon1++;
            cout << dress1.name << " envoie " << dress1.pokemons[pokemon1].name << " au combat !" << endl;
        }
        if (dress2.pokemons[pokemon2].points_de_vie == 0){
            cout << dress2.pokemons[pokemon2].name << " est KO !" << endl;
            pokemon2++;
            cout << dress2.name << " envoie " << dress2.pokemons[pokemon2].name << " au combat !" << endl;
        }
        combat(dress1.pokemons[pokemon1], dress2.pokemons[pokemon2], tour_actuel);
    }
    if (dress1.pokemons[2].points_de_vie == 0){
        cout << dress2.name << " a gagné le combat !" << endl;
    }
    else {
        cout << dress1.name << " a gagné le combat !" << endl;
    }
}



int main(){

    Pokemon Pikachu {"Pikachu", 90, 55, 150};
    Pokemon Salameche {"Salameche", 65, 52, 150};
    Pokemon Bulbizarre {"Bulbizarre", 45, 49, 150};
    Pokemon Carapuce {"Carapuce", 43, 48, 150};
    Pokemon Roucool {"Roucool", 56, 45, 150};
    Pokemon Rattata {"Rattata", 72, 56, 150};
    Dresseur Sacha {"Sacha", {Pikachu, Salameche, Bulbizarre}};
    Dresseur Ondine {"Ondine", {Carapuce, Roucool, Rattata}};

    combat(Sacha, Ondine);

    return 0;

}
