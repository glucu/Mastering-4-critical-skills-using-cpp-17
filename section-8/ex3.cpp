#include<iostream>

int main() {
    
    const int kSize{1000};
    int arr[kSize]{};

    int n{};
    std::cin >> n;

    for(int i{}; i != n; ++i) {
        std::cin >> arr[i];

        if(i == 0) std::cout << arr[i] << ' ';
        else if(arr[i] != arr[i-1]) {
            std::cout << arr[i] << ' ';
        }
    }

    return 0;
}