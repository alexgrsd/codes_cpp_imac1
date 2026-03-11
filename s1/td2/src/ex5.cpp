#include<iostream>
using namespace std;

int main(){

    int nb;
    cin >> nb;
    while (nb > 26 || nb < 1){
        cout << "nombre incorrect" << endl;
        cin >> nb;
    }
    char  nb_char {static_cast<char>(nb + 'a' - 1)}; 
    cout << " nb " << nb << " = " << nb_char << endl;
}