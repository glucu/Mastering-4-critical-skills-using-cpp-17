#include<iostream>

double add(double num1, double num2) {
    return num1 + num2;
}

double sub(double num1, double num2) {
    return num1 - num2;
}

double mult(double num1, double num2) {
    return num1 - num2;
}

double div1(double num1, double num2) {
    return num1 / num2;
}

void read_numbers(double &num1, double &num2) {
    std::cout << "Please enter a number followed by another number:\n";
    std::cin >> num1 >> num2;
}

double menu() {
    int choice{-1};
    while(choice == -1) {
        std::cout << "\nEnter an option:\n"
                  << "1. Add 2 numbers\n"
                  << "2. Subtract 2 numbers\n"
                  << "3. Multiply 2 numbers\n"
                  << "4. Divide 2 nubmers\n"
                  << "5. End the program\n";
        std::cin >> choice;
        if(!(choice >= 1 && choice <= 5)) {
            std::cout << "Invalid choice. Try again\n";
            choice = -1;
        }
    }

    return choice;
}

int main() {
    
    double num1{}, num2{};
    int number_operations{};
    std::string op;
    while(true) {

        double choice{ menu() };

        if(choice == 5) break;

        ++number_operations;

        read_numbers(num1, num2);

        if(choice == 1) {
            op = "+";
            std::cout << num1 << ' ' << op << ' ' << num2 << " = " << add(num1, num2) << '\n';
        }
        else if(choice == 2) {
            op = "-";
            std::cout << num1 << ' ' << op << ' ' << num2 << " = " << sub(num1, num2) << '\n';
        }
        else if(choice == 3) {
            op = "*";
            std::cout << num1 << ' ' << op << ' ' << num2 << " = " << mult(num1, num2) << '\n';
        }
        else if(choice == 4) {
            if(num2 == 0) {
                std::cout << "ERROR: Divide by zero!. Try again\n";
                continue;
            }
            op = "/";
            std::cout << num1 << ' ' << op << ' ' << num2 << " = " << div1(num1, num2) << '\n';
        }
    }

    std::cout << "Number of operations: " << number_operations << '\n';

    return 0;
}