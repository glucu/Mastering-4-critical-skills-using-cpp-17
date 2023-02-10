#include<iostream>

int main() {
    
    int n{};
    std::cin >> n;

    int num{};
    std::cin >> num;
    --n;

    int result = num;

    if(n > 0) { --n; std::cin >> num; if(num > result) { result = num; } }
    if(n > 0) { --n; std::cin >> num; if(num > result) { result = num; } }
    if(n > 0) { --n; std::cin >> num; if(num > result) { result = num; } }
    if(n > 0) { --n; std::cin >> num; if(num > result) { result = num; } }
    if(n > 0) { --n; std::cin >> num; if(num > result) { result = num; } }
    if(n > 0) { --n; std::cin >> num; if(num > result) { result = num; } }
    if(n > 0) { --n; std::cin >> num; if(num > result) { result = num; } }
    if(n > 0) { --n; std::cin >> num; if(num > result) { result = num; } }
    if(n > 0) { --n; std::cin >> num; if(num > result) { result = num; } }

    std::cout << result << '\n';

    return 0;
}