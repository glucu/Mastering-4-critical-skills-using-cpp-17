#include<iostream>

int main() {
    
    int num{};
    std::cin >> num;

    num /= 1000;
    int result{ num % 10 };
    std::cout << result << '\n';

    return 0;
}