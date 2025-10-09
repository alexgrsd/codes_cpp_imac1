#include <iostream>
using namespace std;

// pour vérifier que l'input est bien un mot
int check_string(string str){

    size_t len = str.length();
    for (int i = 0; i<len/2; i++){
        char c = tolower(str[i]);
        if (c < 'a' || c > 'z'){ // pas une lettre
            return 1;
        }
    }
    return 0;
}


int main(){

    string palindrome;
    cout << "Entrez un mot: ";
    cin >> palindrome;

    // gestion d'erreur
    if (cin.fail()){
        cout << "erreur dans l'input" << endl;
        return 1;
    }
    int check {check_string(palindrome)};
    if (check == 1){
        cout << "seul un mot valide est accepté" << endl;
        return 1;
    }

    // vérifier si c'est un palindrome
    size_t len {palindrome.length()};
    for (int i = 0; i<len/2; i++){
        if (palindrome[i] != palindrome[len-i-1]){
            cout << "Ce n'est pas un palindrome" << endl;
            return 0;
        }
    }
    cout << "C'est un palindrome" << endl;


    return 0;

}

