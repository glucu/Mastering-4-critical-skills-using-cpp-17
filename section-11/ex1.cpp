#include<iostream>
#include <cmath>

int max(int a, int b, int c) {
    return std::max(a, std::max(b, c));
}

int max(int a, int b, int c, int d) {
    return std::max(a, max(b, c, d));
}

int max(int a, int b, int c, int d, int e) {
    return std::max(a, max(b, c, d, e));
}

int max(int a, int b, int c, int d, int e, int f) {
    return std::max(max(a, b, c, d, e), f);
}

int main() {
    
    int a{}, b{}, c{}, d{}, e{}, f{};
    std::cin >> a >> b >> c >> d >> e >> f;

    std::cout << max(a, b, c, d, e, f);
    
    return 0;
}