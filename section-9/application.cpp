#include<iostream>
#include <string>

int main() {

    const int kSize{5'000};
    std::string names[kSize]{};
    int ages[kSize]{};
    double salaries[kSize]{};
    char genders[kSize]{};
    int sz{};

    while(true) {

        std::cout << "\nEnter your choice:\n"
                  << "1) Add new employee\n"
                  << "2) Print all employees\n"
                  << "3) Delete by age\n"
                  << "4) Update Salary by name\n";
        int choice{};
        std::cin >> choice;

        if(choice < 1 || choice > 4) {
            std::cout << "Invalid choice. Please try again\n";
            continue;
        }

        if(choice == 1) {
            std::cout << "Enter name: ";
            std::cin >> names[sz];

            std::cout << "Enter age: ";
            std::cin >> ages[sz];

            std::cout << "Enter salary: ";
            std::cin >> salaries[sz];

            std::cout << "Enter gender (M/F): ";
            std::cin >> genders[sz];
            ++sz;
        }
        else if(choice == 2) {
            std::cout << "****************************\n";
            for(int i{}; i != sz; ++i) {
                if(names[i] != "") {
                    std::cout << names[i]    << ' '
                              << ages[i]     << ' '
                              << salaries[i] << ' '
                              << genders[i]  << '\n';
                }
            }
        }
        else if(choice == 3) {
            std::cout << "Enter start and end age\n";
            int start{}, end{};
            std::cin >> start >> end;
            for(int i{}; i != sz; ++i) {
                if(ages[i] >= start && ages[i] <= end) {
                    names[i] = "";
                    ages[i] = -1;
                    salaries[i] = -1;
                    genders[i] = 'N';
                }
            }
        }
        else if(choice == 4) {
            std::cout << "Enter the name and salary\n";
            std::string name;
            double salary{};
            bool found{};
            std::cin >> name >> salary;
            for(int i{}; i != sz; ++i) {
                if(names[i] == name) {
                    found = true;
                    salaries[i] = salary;
                    break;
                }
            }
            if(!found) {
                std::cout << "The employee name does not exist in the database\n";
            }
        }
    }   

    return 0;
}