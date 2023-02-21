#include<iostream>
#include <string>

int main() {
    
    std::string input, str;
    std::cin >> input >> str;

    if(str.size() > input.size()) {
        std::cout << "NO\n";
    }
    else {
        size_t len{ input.size() - str.size() };
        for(size_t i{}; i <= len; ++i) {
            if(input[i] == str[0]) {
                size_t k{};
                size_t stop{ str.size() };
                while(i != len && k != stop) {
                     if(input[i] != str[k]) {
                        std::cout << "NO\n";
                        return 0;
                     }
                     ++i; ++k;
                }

                std::cout << "YES\n";
                return 0;
            }
            
        }

        std::cout << "NO\n";
    }

    return 0;
}