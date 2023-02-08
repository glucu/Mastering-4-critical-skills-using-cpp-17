#include<iostream>

int main() {

	int days{};
	std::cin >> days;

	int years{ days / 360 };
	days = days % 360;

	int months{ days / 30 };
	days = days % 30;

	std::cout << years << ' ' << months << ' ' << days << '\n';
	
	return 0;
}
