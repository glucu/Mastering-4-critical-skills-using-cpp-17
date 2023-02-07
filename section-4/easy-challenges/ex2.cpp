#include <iostream>
#include <string>
#include <cstdlib>

int main() {

    // read first student
    std::cout << "What is student 1 name: ";
    std::string name1;
    std::cin >> name1;

    std::cout << "His id: ";
    int id1{};
    std::cin >> id1;

    std::cout << "His math exam grade: ";
    double exam1{};
    std::cin >> exam1;
    
    // read second student
    std::cout << "What is student 2 name: ";
    std::string name2;
    std::cin >> name2;

    std::cout << "His id: ";
    int id2{};
    std::cin >> id2;

    std::cout << "His math exam grade: ";
    double exam2{};
    std::cin >> exam2;

    // print results
    std::cout << "\nStudents grades in math\n"
              << name1 << " (with id " << id1 << ") got grade: " << exam1 << '\n'
              << name2 << " (with id " << id2 << ") got grade: " << exam2 << '\n'
              << "Average grade is " << (exam1 + exam2) / 2.0 << '\n';
    
    return EXIT_SUCCESS;
}