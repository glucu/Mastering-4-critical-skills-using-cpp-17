#include <iostream>
#include <cstdlib>

int main() {

    double num1{}, num2{};
    std::cin >> num1 >> num2;

    std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << '\n';
    std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << '\n';
    std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << '\n';
    std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << '\n';
    
    return EXIT_SUCCESS;
}