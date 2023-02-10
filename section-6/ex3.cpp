#include<iostream>

int main() {

    int num1{}, num2{}, num3{};
    std::cin >> num1 >> num2 >> num3;

    int result{-1};
    if(num1 < 100 && num1 > result) {
        result = num1;
    }
    if(num2 < 100 && num2 > result) {
        result = num2;
    }
    if(num3 < 100 && num3 > result) {
        result = num3;
    }

    std::cout << result << '\n';

    return 0;
}