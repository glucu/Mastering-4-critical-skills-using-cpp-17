#include<iostream>

bool is_palindrome(const int arr[], int n) {
    for(int i{}; i != n / 2; ++i) {
        if(arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    
    const int kSize{200};
    int arr[kSize]{};

    int n{};
    std::cin >> n;

    for(int i{}; i != n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << is_palindrome(arr, n);

    return 0;
}