#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n; // fin de la récursion
    return fibonacci(n - 1) + fibonacci(n - 2); // appel récursif
}

int fibonacci_iteratif(int n) {
    if (n <= 1) return n;
    int a {0}, b {1}, c {0};
    cout << a << " " << b << " ";
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    return b;
}


int main() {
    int n = 6;
    cout << "Le terme " << n << " de la suite de Fibonacci est " << fibonacci(n) << endl;
    fibonacci_iteratif(n);
    cout << endl;
    return 0;
}