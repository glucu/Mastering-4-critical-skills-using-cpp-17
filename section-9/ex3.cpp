#include<iostream>
#include <string>

int main() {

    std::string input, str;
    std::cin >> input >> str;

     if(str.size() > input.size()) {
         std::cout << "NO\n";
         return 0;
     }

     int str_len = int(str.size());
     int input_len = int(input.size());
     for(int i{}; i != input_len - str_len + 1; ++i) {
         bool is_substring{true};
        for(int j{i}, k{}; j != i + str_len; ++j, ++k) {
            if(input[j] != str[k]) {
                is_substring = false;
                break;
            }
        }

        if(is_substring) {
            std::cout << "YES\n";
            return 0;
        }
     }

     std::cout << "NO\n";

    return 0;
}