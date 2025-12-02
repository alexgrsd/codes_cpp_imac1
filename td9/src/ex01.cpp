# include <iostream>

void print_pointer(int* p) {
    std::cout << *p << std::endl;
}

int main() {

    int* a {new int};

    std::cout << "Enter an integer: ";
    std::cin >> *a;
    print_pointer(a);
    std::cout << a << std::endl;
    delete a;

    return 0;

}