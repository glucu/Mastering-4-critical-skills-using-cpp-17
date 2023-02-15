#include<iostream>

int main() {
    
    const int kSize{2000};
    int arr[kSize]{};

    int n{};
    std::cin >> n;

    for(int i{}; i != n; ++i) {
        std::cin >> arr[i];
    }

    bool is_palin{true};
    for(int i{}; i < n / 2; ++i) {
        if(arr[i] != arr[n - i - 1]) {
            is_palin = false;
            break;
        }
    }

    if(is_palin) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }

    return 0;
}