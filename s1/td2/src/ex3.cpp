#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    int nb1 { 11 };
    nb1 /= 2;
    cout << "--" << nb1 << "--" << endl;

    int nb2 { 11 };
    float nb2f { static_cast<float>(nb2) };
    nb2f /= 2;
    cout << "--" << nb2f << "--" << endl;

    return 0;
}