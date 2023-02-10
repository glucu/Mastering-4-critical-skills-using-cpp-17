#include<iostream>

int main() {
    
    int n{};
    std::cin >> n;

    int start{1};
    while(start <= n) {
        int start_count{1};
        while(start_count <= start) {
            std::cout << '*';
            ++start_count;
        }
        std::cout << '\n';
        ++start;
    }

    return 0;
}