#include<iostream>

int main() {
    
    int count{};
    for(int a{1}; a <= 200; ++a) {
        for(int b{1}; b <= 200; ++b) {
            for(int c{1}; c <= 200; ++c) {
                for(int d{1}; d <= 200; ++d) {
                    count += (a + b) == (b + c + d);
                }
            }
        }
    }

    std::cout << count << '\n';
    
    return 0;
}