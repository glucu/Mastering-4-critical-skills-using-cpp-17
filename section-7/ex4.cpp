#include<iostream>

int main() {
    
    int n{};
    std::cin >> n;

    while(n) {
        int start_count{};
        while(start_count < n) {
            std::cout << '*';
            ++start_count;
        }
        std::cout << '\n';
        --n;
    }
    
    return 0;
}