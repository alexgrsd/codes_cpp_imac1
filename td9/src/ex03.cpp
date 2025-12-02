


#include <iostream>
#include <cstdlib> 
#include <ctime> 

size_t size = 100;

float* max(float* tab, const size_t& size){
    float* max = tab;
    for (size_t i = 1; i < size; i++){
        if (*(tab+i) > *max) max = (tab+i);
    }
    return max;
}

float* thresholdFilter(float const* const array, size_t const size, float const threshold, size_t& new_size) {

    std::vector <float> result;
    for (size_t i = 0; i < size; i++){
        if (*(array+i) > threshold) result.push_back(*(array+i));
    }
    new_size = result.size();

    float* filtered = new float[new_size];
    for (size_t i = 0; i < new_size; ++i) {
        *(filtered + i) = result[i];
    }
    return filtered;
}


int main() {

    float* tab {new float[size]};

    std::srand(std::time(nullptr));
    for (size_t i = 0; i < size; i++){
        *(tab+i) = static_cast<float>(rand()) / RAND_MAX * 100.0f;
    }

    float* res = max(tab, size);
    std::cout << *res << std::endl;

    size_t new_size {0};

    float* tresholded_tab = thresholdFilter(tab, size, 50.0f, new_size);
    for (size_t i = 0; i < new_size; i++){
        std::cout << *(tresholded_tab+i) << " ";
    }
    std::cout << std::endl;
    std::cout << new_size << std::endl;

    delete[] tresholded_tab;
    delete[] tab;
    return 0;
}
