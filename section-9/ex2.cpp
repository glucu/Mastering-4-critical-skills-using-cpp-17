#include<iostream>
#include <string>
int main() {
    
    std::string input, str;
    std::cin >> input >> str;

    if(str.size() > input.size()) {
        std::cout << "NO\n";
    }
    else {
        bool is_suffix{true};
        size_t start{ input.size() - str.size() };
        for(size_t i{start}, k{}; i != input.size(); ++i, ++k) {
            if(input[i] != str[k]) {
                is_suffix = false;
                break;
            }
        }

        if(is_suffix) {
            std::cout << "YES\n";
        }
        else {
            std::cout << "NO\n";
        }
    }

    return 0;
}