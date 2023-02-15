#include<iostream>

int main() {
    
    int n{}, a{}, b{}, total{};
    std::cin >> n >> a >> b;

    for(int i{1}; i <= n; ++i) {
        int tmp{i};
        int digit_sum{};

        while(tmp) {
            digit_sum += tmp % 10;
            tmp /= 10;
        }
        if(a <= digit_sum && digit_sum <= b) {
            total += i;
        }
    }

    std::cout << total << '\n';

    return 0;
}