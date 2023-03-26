#include<iostream>

int main() {
    
    const int kSize{200};
    int numbers[kSize]{}, queries[kSize]{};

    int n{};
    std::cin >> n;

    for(int i{}; i != n; ++i) {
        std::cin >> numbers[i];
    }

    int q{};
    std::cin >> q;
    for(int i{}; i != q; ++i) {
        std::cin >> queries[i];

        int last_idx{-1};
        for(int j{ n - 1 }; j >= 0; --j) {
            if(numbers[j] == queries[i]) {
                last_idx = j;
                break;
            }
        }
        std::cout << last_idx << '\n';
    }


    return 0;
}