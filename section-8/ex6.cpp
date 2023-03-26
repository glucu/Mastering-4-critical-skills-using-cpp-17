#include<iostream>

int main() {

    const int kSize{200};
    int numbers[kSize]{};

    int n{};
    std::cin >> n;

    int min1{}, min1_idx{};
    for(int i{}; i != n; ++i) {
        std::cin >> numbers[i];
        if(i == 0) {
            min1 = numbers[i];
        }
        else if (numbers[i] < min1) {
            min1 = numbers[i];
            min1_idx = i;
        }
    }

    int min2{INT32_MAX}, min3{INT32_MAX};
    for(int i{}; i != n; ++i) {
        if(i != min1_idx && numbers[i] < min2) {
            min3 = min2;
            min2 = numbers[i];

        }
        else if(i != min1_idx && numbers[i] < min3) {
            min3 = numbers[i];
        }
    }

    std::cout << min1 << ' ' << min2 << ' ' << min3 << '\n';

    return 0;
}
