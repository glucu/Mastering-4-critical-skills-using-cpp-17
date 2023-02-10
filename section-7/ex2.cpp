#include<iostream>

int main() {
    
    int n{};
    char ch{};
    std::cin >> n >> ch;

    while(n) {
        std::cout << ch;
        --n;
    }

    return 0;
}