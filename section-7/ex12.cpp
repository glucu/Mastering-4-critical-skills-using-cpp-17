#include<iostream>

int main() {
    
    int n{}, m{};
    std::cin >> n >> m;

    int start_row{1};
    while(start_row <= n) {
        int start_col{1};
        while(start_col <= m) {
            std::cout << start_row << " x " << start_col << " = " << (start_row * start_col) << '\n';
            ++start_col;
        }
        ++start_row;
    }

    return 0;
}