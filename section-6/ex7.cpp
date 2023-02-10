#include<iostream>

int main() {

    int x{}, s1{}, e1{}, s2{}, e2{}, s3{}, e3{};
    std::cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

    int num_intervals{};

    if(x >= s1 && x <= e1) ++num_intervals;
    if(x >= s2 && x <= e2) ++num_intervals;
    if(x >= s3 && x <= e3) ++num_intervals;

    std::cout << num_intervals << '\n';
       
    return 0;
}