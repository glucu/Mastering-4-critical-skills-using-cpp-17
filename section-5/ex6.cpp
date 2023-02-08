#include<iostream>

int main() {

	double num1{}, num2{}, num3{}, num4{}, num5{};
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    std::cout << (num1 + num2 + num3 + num4 + num5) / 5.0 << '\n';
    std::cout << (num1 + num2 + num3) / (num4 + num5) << '\n';
    std::cout << ((num1 + num2 + num3) / 3.0) / ((num4 + num5) / 2.0) << '\n';

	return 0;
}
