#include<iostream>
#include <string>

int main() {
    
    std::string input;
    std::cin >> input;

    std::string group;
    for(size_t i{}; i != input.size(); ++i) {
        if(i == 0 || input[i] == input[i-1]) {
            group += input[i];
        }
        else {
            std::cout << group << ' ';
            group = input[i];
        }
    }
    
    std::cout << group << '\n';
    
    return 0;
}