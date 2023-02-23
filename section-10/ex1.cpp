#include<iostream>

int main() {
    
    const int kRow{200}, kCol{200};
    int arr[kRow][kCol]{};

    int n{}, m{};
    std::cin >> n >> m;
    for(int row{}; row != n; ++row) {
        for(int col{}; col != m; ++col) {
            std::cin >> arr[row][col];
        }
    }

    int q{};
    std::cin >> q;
    while(q) {
        int first{}, second{};
        std::cin >> first >> second;

        --first;
        --second;

        bool is_less{true};
        for(int col{}; col != m; ++col) {
            if(arr[first][col] >= arr[second][col]) {
                is_less = false;
                break;
            }
        }

        if(is_less) {
            std::cout << "YES\n";
        }
        else {
            std::cout << "NO\n";
        }

        --q;
    }

    return 0;
}