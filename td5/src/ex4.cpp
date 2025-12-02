#include <iostream>

using namespace std;


// Fonction pour calculer la moyenne d'un tableau d'entiers
float average(const vector<int>& arr) {
    if (arr.empty()) return 0; // Gérer le cas d'un tableau vide
    float sum {0};
    for (int i : arr) {
        sum += i;
    }
    return sum / float(arr.size());
}


// Fonction pour calculer la moyenne d'un tableau de flottants
float average(const vector<float>& arr) { // en float
    if (arr.empty()) return 0.0f; // Gérer le cas d'un tableau vide
    float sum {0.0f};
    for (int i : arr) {
        sum += i;
    }
    return sum / arr.size();
}

int main() {
    vector<int> intArray = {1, 2, 3, 4, 5};
    vector<float> floatArray = {1.5f, 2.5f, 3.5f, 4.5f, 5.5f};
    vector <int> emptyArray {};

    int intAverage = average(intArray);
    float floatAverage = average(floatArray);
    float emptyAverage = average(emptyArray);

    cout << "La moyenne des entiers est " << intAverage << endl;
    cout << "La moyenne des flottants est " << floatAverage << endl;
    cout << "La moyenne du tableau vide est " << emptyAverage << endl;

    return 0;
}