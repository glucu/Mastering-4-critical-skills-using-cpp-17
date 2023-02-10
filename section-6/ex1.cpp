#include<iostream>

int main() {

    int a{}, b{};
    std::cin >> a >> b;

    bool is_a_even{ a % 2 == 0 };
    bool is_b_even{ b % 2 == 0 };

    if(!is_a_even && !is_b_even) {
        std::cout << (a * b) << '\n';
    }
    else if(is_a_even && is_b_even) {
        std::cout << (a / b) << '\n';
    }
    else if(!is_a_even && is_b_even) {
        std::cout << (a + b) << '\n';
    }
    else {
        std::cout << (a - b) << '\n';
    }
    
    return 0;
}