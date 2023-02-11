#include<iostream>

int main() {
    
    int n{};
    std::cin >> n;

    int start{};
    while(start <= n) {
        if(start % 8 == 0 || (start % 4 == 0 && start % 3 == 0)) {
            std::cout << start << ' ';
        }
        ++start;
    }
    
    return 0;
}