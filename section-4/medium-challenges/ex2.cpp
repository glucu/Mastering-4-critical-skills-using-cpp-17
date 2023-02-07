#include <iostream>
#include <cstdlib>

int main() {
    
    int num1{}, num2{}, temp{-1};
    std::cin >> num1 >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    std::cout << num1 << ' ' << num2 << '\n';

    return EXIT_SUCCESS;
}