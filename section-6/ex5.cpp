#include<iostream>

int main() {
    
    int num1{}, num2{}, num3{}, num4{}, num5{}, num6{}, num7{}, num8{}, num9{}, num10{};
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;

    int result{num1};
    if(num2 > result) result = num2;
    if(num3 > result) result = num3;
    if(num4 > result) result = num4;
    if(num5 > result) result = num5;
    if(num6 > result) result = num6;
    if(num7 > result) result = num7;
    if(num8 > result) result = num8;
    if(num9 > result) result = num9;
    if(num10 > result) result = num10;

    std::cout << result << '\n';

    return 0;
}