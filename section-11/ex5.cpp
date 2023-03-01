#include<iostream>

void set_powers(int arr[], int len = 5, int m = 2) {
    arr[0] = 1;
    for(int i{1}; i != len; ++i) {
        arr[i] = arr[i - 1] * m;
    }
}

void print_array(const int arr[], int len) {
    for(int i{}; i != len; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    
    const int kSize{200};
    int arr[kSize]{};

    int len{}, m{};
    std::cin >> len >> m;

    set_powers(arr, len, m);
    print_array(arr, len);

    return 0;
}