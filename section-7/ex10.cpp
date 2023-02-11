#include<iostream>
#include <string>

int main() {
    
    int n{};
    std::cin >> n;

    while(n) {
        std::string str;
        std::cin >> str;

        if(str == "NO" || str == "no" || str == "ON" || str == "on" || 
           str == "No" || str == "nO" || str == "On" || str == "oN") {
            std::cout << str << ' ';
        }
        --n;
    }
    return 0;
}