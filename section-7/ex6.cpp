#include<iostream>

int main() {
    
    int n{};
    std::cin >> n;

    int start_row{1}, end_row{1}, nCpy{n};
    while(start_row <= n) {
        int whitespace{1};
        while(whitespace <= nCpy) {
            std::cout << ' ';
            ++whitespace;
        }
        
        int start_count{1};
        while(start_count <= end_row) {
            std::cout << '*';
            ++start_count;
        }
        std::cout << '\n';

        end_row += 2;
        ++start_row;
        --nCpy;
    }

    nCpy = n;
    end_row -= 2;

    while(n) {
        int whitespace{nCpy};
        while(whitespace >= n) {
            std::cout << ' ';
            --whitespace;
        }

        int start_row{ end_row };
        while(start_row > 0) {
            std::cout << '*';
            --start_row;
        }
        std::cout << '\n';
        
        --n;
        end_row -= 2;
    }

    return 0;
}