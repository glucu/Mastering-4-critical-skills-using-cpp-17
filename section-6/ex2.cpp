#include<iostream>

int main() {
    
    int num1{}, num2{}, num3{}, tmp{-1};
    std::cin >> num1 >> num2 >> num3;

    if(num2 < num1) {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    if(num3 < num2) {
        tmp = num2;
        num2 = num3;
        num3 = tmp;

        if(num2 < num1) {
            tmp = num1;
            num1 = num2;
            num2 = tmp;
        }
    }

    std::cout << num1 << ' ' << num2 << ' ' << num3 << '\n';
    
    return 0;
}