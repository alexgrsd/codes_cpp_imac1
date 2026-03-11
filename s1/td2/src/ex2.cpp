#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    float f1,f2,f3;
    cin >> f1 >> f2 >> f3;
    float sum = f1 + f2 + f3;
    float avg = sum / 3;
    cout << "Sum: " << sum << ", Average: " << avg << endl;
    return 0;
}