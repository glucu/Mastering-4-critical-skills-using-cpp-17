// Homework 4: Print Program Output

#include<iostream>
using namespace std;

/* 
    num1 = 0 1 1 2 3 5 8 13 21
    num2 = 1 1 2 3 5 8 13 21 34
    num3 = 1 2 3 5 8 13 21 34 55
    output = 1 2 3 5 8 13 21 34 55
*/

int main() {
	int num1, num2, num3;

	num1 = 0, num2 = 1, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";

	

	return 0;
}
