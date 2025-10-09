#include <iostream>
using namespace std;

int main(){

    int num;
    cin >> num;
    if (num > 0) {
        std::cout << "Positive" << std::endl;
    } else if (num < 0) {
        std::cout << "Negative" << std::endl;
    } else {
        std::cout << "Zero" << std::endl;
    }
    return 0;
}