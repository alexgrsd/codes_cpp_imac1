#include <iostream>
using namespace std;

int main() {
    
    unsigned int s = 0xffffff;

    int r = (s & 0xff0000) >> 16;
    int g = (s & 0x00ff00) >> 8;
    int b = (s & 0x0000ff);

    cout << r << " " << g << " " << b << endl;

    // uuuuu


    return 0;
}