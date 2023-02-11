#include<iostream>

int main() {
    
    int t{};
    std::cin >> t;

    while(t) {
        int n{};
        std::cin >> n;

        int start{}, min{};
        while(start < n) {
            int num{};
            std::cin >> num;

            if(start == 0 || num < min) {
                min = num; 
            }
            ++start;
        }
        std::cout << min << '\n';
        
        --t;
    }

    return 0;
}