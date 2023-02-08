#include<iostream>

int main() {

    int num1{}, num2{};
    std::cin >> num1 >> num2;

    int result{ num1 - (num1 / num2) * num2 };
    std::cout << result << '\n';
    
    return 0;
}