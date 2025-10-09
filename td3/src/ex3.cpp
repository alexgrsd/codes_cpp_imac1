#include <iostream>
using namespace std;

int main(){ 

    int num;
    cin >> num;
    if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    while (num > 1) {
        num -= 2;
        cout << num << endl;
    }
    return 0;
}