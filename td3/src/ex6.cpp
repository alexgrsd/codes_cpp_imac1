#include <iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter the size of the triangle: ";
    cin >> size;
    int technique;
    cout << "Choose technique (1 to 3): ";
    cin >> technique;

    // technique 1 : triangle simple
    for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }


    // technique 2 : sapin de noel 
    for (int i = 0; i< size; i++){
        for (int j = 0; j< size; j++){
            
        }
    }

    return 0;
}