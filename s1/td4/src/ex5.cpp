#include <iostream>

using namespace std;

int main(){

    vector <int> numbers(10);
    string input {};
    cout << "Entrez 10 chiffres entre 0 et 5 (inclus) séparés par rien: ";
    // on lit les nombres en une fois (kiffeur)
    cin >> input;
    if (cin.fail() || input.length() != 10){
        cout << "Entrée invalide. Veuillez entrer exactement 10 chiffres." << endl;
        return 1;   
    }
    for (int i = 0; i<10; i++){
        if (input[i] < '0' || input[i] > '5'){
            cout << "Entrée invalide. Veuillez entrer uniquement des chiffres entre 0 et 5." << endl;
            return 1;   
        }
        numbers[i] = input[i]-'0'; // on convertit le char en int
    }   

    int last {9};

    for (int i = 0; i<10; i++){
        if (numbers[i] == 3){
            for (int j = i; j<last; j++) numbers[j] = numbers[j+1];
            numbers[last] = 0;
            last--;
            i--;
        } 
    }

    for (int i = 0; i<10; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;   
    return 0;
}