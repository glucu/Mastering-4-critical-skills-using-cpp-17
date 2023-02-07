#include <iostream>
#include <cstdlib>

int main() {

    int even1{}, even2{}, even3{}, even4{};
    int odd1{}, odd2{}, odd3{}, odd4{};

    std::cin >> odd1 >> even1 >> odd2 >> even2 
             >> odd3 >> even3 >> odd4 >> even4;

    int even_sum{ even1 + even2 + even3 + even4 };
    int odd_sum{ odd1 + odd2 + odd3 + odd4 };

    std::cout << even_sum << ' ' << odd_sum << '\n';
    
    return EXIT_SUCCESS;
}