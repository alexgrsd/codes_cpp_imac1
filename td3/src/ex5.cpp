#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main(){

  // Initialisation du générateur de nombres aléatoires avec la fonction time()
    srand(time(nullptr));
    int random_variable { rand() };
    int num { rand() % 100 + 1 }; // random number between 1 and 100
    int guess;
    cout << "Guess a number between 1 and 100: ";
    do {
        cin >> guess;
        if (cin.fail()) {
            cout << "Please enter a valid number." << endl;
            cin.clear(); // clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            continue;
        }
        if (guess < num) {
            cout << "Trop bas:  ";
        } else if (guess > num) {
            cout << "Trop haut: ";
        } else if (guess == num) {
            cout << "gg" << endl;
        }

    } while (guess != num);
}