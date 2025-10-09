#include <iostream>
using namespace std;

int sum(const int& a, const int& b) {
    return a + b;
}

int main() {
    int a {3};
    int b {4};
    int c {sum(a, b)};
    cout << "La somme de " << a << " et " << b << " est " << c << endl;
    return 0;
}