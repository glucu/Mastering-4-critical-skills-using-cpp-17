#include<iostream>

int main() {
    
    int n{};
    std::cin >> n;
    
    bool is_prime{true};
    if(n == 1) {
        is_prime = false;
    }
    else {
        
        for(int i{2}; i != n; ++i) {
            if(n % i == 0) {
                is_prime = false;
                break;
            }
        }
    }

    if(is_prime) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }

    return 0;
}