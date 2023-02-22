#include<iostream>
#include <string>

int main() {

    std::string str1, str2;
    std::cin >> str1 >> str2;

    int len{ str1.size() };
    if(len < str2.size()) {
        len = str2.size();
    }

    int smaller{-1};
    for(int i{}; smaller == -1 && i < len; ++i) {
        if(str1[i] != str2[i]) {
            if(str1[i] < str2[i]) {
                smaller = 0;
            }
            else {
                smaller = 1;
            }
        }
    }

    if(smaller == -1) {
        if(str1.size() <= str2.size()) {
            smaller = 0;
        }
        else {
            smaller = 1;
        }
    }
    if(smaller == 0) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }

    return 0;
}