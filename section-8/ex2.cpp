#include<iostream>

int main() {

    const int kSize{200};
    int arr[kSize]{};

    int n{};
    std::cin >> n;

    int max{0}, min{2000};
    for(int i{}; i != n; ++i) {
        std::cin >> arr[i];

        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    for(int i{}; i != n; ++i) {
        if(arr[i] == max) arr[i] = min;
        else if(arr[i] == min) arr[i] = max;
    }

    for(int i{}; i != n; ++i) {
        std::cout << arr[i] << ' ';
    }

    return 0;
}