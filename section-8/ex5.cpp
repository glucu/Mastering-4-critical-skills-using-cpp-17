#include<iostream>

int main() {
    
    const int kSize{200};
    int arr[kSize]{};

    int n{};
    std::cin >> n;

    for(int i{}; i != n; ++i) {
        std::cin >> arr[i];
    }

    bool first_num{true};
    int min{};
    for(int i{1}; i < n; ++i) {
        for(int j{i+1}; j < n; ++j) {
            int tmp{ arr[i] + arr[j] + j - i };

            if(first_num || tmp < min) {
                min = tmp;
                first_num = false;
            }
        }
    }
    
    std::cout << min << '\n';

    return 0;
}