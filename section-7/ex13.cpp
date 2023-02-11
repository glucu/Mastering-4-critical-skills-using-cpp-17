#include<iostream>

int main() {
    
    int t{};
    std::cin >> t;
    while(t) {
        int n{};
        std::cin >> n;

        int end_cnt{}, sum{};
        while(n) {
            int num{};
            std::cin >> num;

            int start_cnt{}, res{num};
            while(start_cnt < end_cnt) {
                num *= num;
                ++start_cnt;
            }
            sum += num;
            ++end_cnt;
            --n;
        }
        std::cout << sum << '\n';

        --t;
    }

    return 0;
}