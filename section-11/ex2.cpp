#include<iostream>
#include <string>

std::string reverse_str(const std::string &str) {
    std::string result;
    size_t n{ str.size() };
    for(size_t i{}; i != n; ++i) {
        result += str[n - i - 1];
    }

    return result;
}

int main() {
    
    std::string str;
    while(std::cin >> str) {
        std::cout << reverse_str(str) << '\n';
    }

    return 0;
}