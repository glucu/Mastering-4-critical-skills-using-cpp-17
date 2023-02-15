#include<iostream>

int main() {
    
    int n{};
    std::cin >> n;

    bool is_first{true};
    for(int curr_prime{2}; curr_prime <= n; ++curr_prime) {
        bool is_prime{true};
        for(int i{2}; i != curr_prime; ++i) {
            if(curr_prime % i == 0) {
                is_prime = false;
                break;
            }
        }

        if(is_prime) {
            
            if(!is_first) {
                std::cout << ",";
            }
            std::cout << curr_prime;
            is_first = false;
        }
    }

    return 0;
}