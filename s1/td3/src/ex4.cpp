#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    if (cin.fail()) {
        cout << "un chiffre steuplé" << endl;
        return 1;
    }
    if (age < 0) {
        cout << "un age positif steuplé" << endl;
        return 1;
    }
    if (age < 18) {
        cout << "mineur" << endl;
    } else {
        cout << "majeur" << endl;
    }
    return 0;
}