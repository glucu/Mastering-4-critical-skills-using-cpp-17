#include<iostream>
#include <string>

int main() {
    
    std::string input, str;
    std::cin >> input >> str;

    if(str.size() > input.size()) {
        std::cout << "NO\n";
    }   
    else {
        size_t next_match{};
        for(size_t i{}; i != input.size(); ++i) {
            if(input[i] == str[next_match]) {
                ++next_match;
            }
            if(next_match == str.size()) {
                std::cout << "YES\n";
                return 0;
            }
        }
    }

    std::cout << "NO\n";

    return 0;
}