#include <iostream>
#include <cstdlib> 
#include <ctime> 



int* first_over_ninety(const std::vector<int>& tab){
    if (tab.empty()) return nullptr;
    int* result = nullptr;
    size_t size = tab.size();
    for (size_t i = 0; i < size; i++){
        if (tab[i] > 90) {
            result = new int(tab[i]);
            break;
        }
    }
    return result;
}

int* sum (const int* tab, const size_t& size){
    int* sum {new int{0}};
    for (size_t i = 0; i < size; i++){
        *sum += *(tab+i);
    }
    return sum;

}

int main() {

    size_t size = 100;

   std::vector<int> tab(size);

    std::srand(std::time(nullptr));
    for (size_t i = 0; i < size; i++){
        tab[i] = rand() % 100;
    }

    const int* res = first_over_ninety(tab);
    if (res) std::cout << *res << std::endl;
    else std::cout << "No element over 90" << std::endl;

    const int* sum_tab = sum(tab.data(), size);
    std::cout << *sum_tab << std::endl;

    delete sum_tab;
    return 0;
}