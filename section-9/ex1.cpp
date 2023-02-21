#include<iostream>
#include <string>

int main() {

    std::string input, str;
    std::cin >> input >> str;

    if(str.size() > input.size()) {
        std::cout << "NO\n";
    }
    else {
        bool is_prefix{true};
        for(size_t i{}; i != str.size(); ++i) {
            if(str[i] != input[i]) {
                is_prefix = false;
                break;
            }
        }

        if(is_prefix) {
            std::cout << "YES\n";
        }
        else {
            std::cout << "NO\n";
        }
    }

    return 0;
}