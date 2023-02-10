#include<iostream>

int main() {
    
    int x{}, num1{}, num2{}, num3{}, num4{}, num5{};
    std::cin >> x >> num1 >> num2 >> num3 >> num4 >> num5;

    int count{};
    count += (num1 <= x);
    count += (num2 <= x);
    count += (num3 <= x);
    count += (num4 <= x);
    count += (num5 <= x);

    std::cout << count << ' ' << (5 - count) << '\n';

    return 0;
}