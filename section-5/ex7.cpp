#include<iostream>

int main() {

    double a{}, b{};
    std::cin >> a >> b;

    double quotient{ a / b };
    double result{ quotient - int(quotient) };
    std::cout << result << '\n';

    return 0;
}