#include<iostream>
#include <string>

int main() {
    
    std::string input;
    std::cin >> input;

    std::string group;
    size_t count{};
    for(size_t i{}; i != input.size(); ++i) {
        if(i == 0 || input[i] == input[i-1]) {
            group = input[i];
            ++count;
        }
        else {
            std::cout << group << count << "_";
            group = input[i];
            count = 1;
        }
    }
    
    std::cout << group << count << '\n';
    
    return 0;
}