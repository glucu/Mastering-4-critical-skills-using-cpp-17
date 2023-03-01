#include <iostream>

bool is_prime(int num) {
    if(num == 1) return false;

    for(int i{2}; i != num; ++i) {
        if(num % i == 0) {
            return false;
        }
    }

    return true;
}

int nth_prime(int n) {
    for(int i{2}; ; ++i) {
        if(is_prime(i)) {
            --n;
            if(n == 1) return i;
        }
    }

    return -1;
}

int main() {
    
    int n{};
    while(std::cin >> n) {
        std::cout << std::boolalpha << nth_prime(n) << '\n';
    }

    return 0;    
}