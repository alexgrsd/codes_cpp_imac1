#include <iostream>
#include <string>

using namespace std;

int main(){

    int level_number;
    size_t enemy_number;
    cout << "Enter level number: ";
    cin >> level_number;
    if (cin.fail() || level_number < 1){
        cout << "Invalid level number. It must be a positive integer." << endl;
        return 1;   
    }
    cout << "Enter enemy number: ";
    cin >> enemy_number;
    if (cin.fail() || enemy_number < 1){
        cout << "Invalid enemy number. It must be a positive integer." << endl;
        return 1;
    }

    vector<int> enemies(enemy_number); // tableau des niveaux des ennemis
    vector <bool> exp_points(level_number); // on stock ici si les points sont comptés dans le calcul ou non (ghetto je crois)

    for (int i = 0; i < enemy_number; i++){
        cout << "enter level of enemy " << i+1 << ": "; 
        cin >> enemies[i];
        if (cin.fail() || enemies[i] < 1){
            cout << "Invalid enemy level. It must be a positive integer." << endl;
            return 1;   
        }
    } // la on a un tableau avec les niveaux des ennemis

    for (int i = 0; i < enemy_number; i++){
        for (int mult = enemies[i]; mult < level_number; mult+=enemies[i]){
            exp_points[mult] = true; // chaque multiple du niveau d'un enemi inférieur au nombre du niveau courant est compté
        }
    }

    int total_exp {0};
    for (int i = 1; i < level_number; i++){
        if (exp_points[i]){
            cout << "+ " << i << "xp";
            total_exp += i;
        }
    }
    cout << endl;
    cout << "Total experience points for level " << level_number << ": " << total_exp << "xp" << endl;
    return 0;
}