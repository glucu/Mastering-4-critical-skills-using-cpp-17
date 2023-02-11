#include<iostream>

int main() {
    
    int n{};
    std::cin >> n;

    int num{3}, cnt{};
    while(cnt != n) {
        if(num % 3 == 0 && num % 4 != 0) {
            std::cout << num << ' ';
            ++cnt;
        }
        ++num;
    }
    
    return 0;
}