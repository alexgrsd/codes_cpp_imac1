#include <iostream>

using namespace std;

int average(const vector<int>& arr, const int& size) { // en int
    if (size <= 0) return 0;
    int sum {0};
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

float average(const vector<float>& arr, const int& size) { // en float
    if (size <= 0) return 0.0f;
    float sum {0.0f};
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    vector<int> intArray = {1, 2, 3, 4, 5};
    vector<float> floatArray = {1.5f, 2.5f, 3.5f, 4.5f, 5.5f};

    int intAverage = average(intArray, intArray.size());
    float floatAverage = average(floatArray, floatArray.size());

    cout << "La moyenne des entiers est " << intAverage << endl;
    cout << "La moyenne des flottants est " << floatAverage << endl;

    return 0;
}