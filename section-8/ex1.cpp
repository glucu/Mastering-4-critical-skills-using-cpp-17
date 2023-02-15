#include<iostream>

int main() {
    
    const int kSize{200};
    int arr[kSize]{};

    int n{};
    std::cin >> n;

    for(int i{}; i != n; ++i) {
        std::cin >> arr[i];
    }


    bool is_increasing{true};
    for(int i{1}; i < n-1; ++i) {
        if(arr[i] < arr[i-1]) {
            is_increasing = false;
            break;
        }
    }

    if(is_increasing) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }

    return 0;
}