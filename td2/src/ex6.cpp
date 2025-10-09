#include <iostream>

int main()
{
    float const pi {3.141592};
    float a { pi * 3 }; 
    float b { 8 };  

    a += 20;  

    b *= 15; 

    std::cout << "a: " << a << std::endl;

    std::cout << "b: " << b << std::endl;
    return 0;
}