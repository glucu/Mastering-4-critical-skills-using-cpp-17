#include<iostream>
#include <string>

int main() {
    
    std::string input;
    std::cin >> input;

    size_t digit{};
    for(size_t i{}; i < input.size(); ++i) {
        digit = digit * 10 + (input[i] - '0'); 
    }

    std::cout << digit << ' ' << digit * 3 << '\n';

    return 0;
}