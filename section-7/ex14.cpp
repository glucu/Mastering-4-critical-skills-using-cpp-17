#include<iostream>

int main() {
	
    int n{};
    std::cin >> n;

    for(int i{}; i < n; ++i) {
        for(int j{}; j < n; ++j) {
            if(i == j || n - i - 1 == j) {
                std::cout << '*';
            }
            else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
    
	return 0;
}