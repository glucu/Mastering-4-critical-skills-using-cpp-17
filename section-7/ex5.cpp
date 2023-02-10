#include<iostream>

int main() {
    
    int n{};
    std::cin >> n;

    double even_sum{}, even_count{};
    int odd_sum{}, odd_count{};
    
    int start{1};
    while(start <= n) {
        double num{};
        std::cin >> num;
        if(start % 2 == 0) {
            even_sum += num;
            ++even_count;
        }
        else {
            odd_sum += num;
            ++odd_count;
        }
        ++start;
    }

    std::cout << (even_sum / even_count) << ' ' << (odd_sum / odd_count) << '\n';

    return 0;
}