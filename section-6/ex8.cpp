#include<iostream>

int main() {

    int s1{}, e1{}, s2{}, e2{};
    std::cin >> s1 >> e1 >> s2 >> e2;

    if(e1 < s2 || e2 < s1) {
        std::cout << -1 << '\n';
    }
    else {

        if(s1 < s2) s1 = s2;
        if(e1 > e2) e1 = e2;

        std::cout << s1 << ' ' << e1 << '\n';
    }
    
    return 0;
}