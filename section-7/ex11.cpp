#include<iostream>

int main() {
    
    int n{};
    std::cin >> n;

    int ret{};
    while(n > 0) {
        ret = (ret * 10) + (n % 10);
        n /= 10;
    }

    std::cout << ret << ' ' << ret * 3 << '\n';

    return 0;
}