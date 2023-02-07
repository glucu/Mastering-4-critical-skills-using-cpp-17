#include <iostream>
#include <cstdlib>

int main() {
    
    int n{};
    std::cin >> n;

    std::cout << (n * (n + 1) / 2) << '\n';

    return EXIT_SUCCESS;
}