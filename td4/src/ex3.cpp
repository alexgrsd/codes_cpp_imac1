#include <iostream>
#include <string>

using namespace std;

int check_strings(string str){

    size_t len { str.length() };
    for (int i = 0; i<len; i++){
        if (str[i] < '1' || str[i] > '9'){
            return 1;
        }
    }
    if (len < 7){
        return 2;
    }
    return 0;
}

int main(){

    string num;
    cout << "Entrez un nombre entier supérieur ou égal a 1 000 000: ";
    cin >> num;
    if (check_strings(num) == 0) {
        cout << "seul un nombre valide est accepté" << endl;
        return 1;
    }
    if (check_strings(num) == 2) {
        cout << "le nombre doit etre supérieur ou égal a 1 000 000" << endl;
        return 1;
    }

    size_t len { num.length() };
    array<int, 10> count {0}; // tableau de comptage de chiffres
    for (int i = 0; i<len; i++){
        count[num[i]-'0']++; // incrémenter le compteur pour le chiffre correspondant (on enlève '0' pour obtenir la valeur numérique du caractère)
    }
    for (int i = 1; i < 10; i++){
        if (count[i] > 0){
            cout << i << " apparait " << count[i] << " fois" << endl;
        }
    }
    return 0;
}