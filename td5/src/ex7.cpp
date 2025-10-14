#include <iostream>

int sum (std::vector<int> vec) {
    int total {0};
    for (int num : vec) {
        total += num;
    }
    return total;
}

int sumRecursive (std::vector<int> vec, int debut, int fin) {
    if (fin < debut) {
        return 0;
    }
    return vec[fin] + sumRecursive(vec, debut, fin - 1);
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Sum: " << sum(numbers) << std::endl;
    std::cout << "Sum (recursive): " << sumRecursive(numbers, 0, numbers.size() - 1) << std::endl;
    return 0;
}