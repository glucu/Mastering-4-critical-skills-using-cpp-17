#include<iostream>

int main() {
    
    int num{}, sum{};
    std::cin >> num;

    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;

    std::cout << sum << '\n';
     
    return 0;
}