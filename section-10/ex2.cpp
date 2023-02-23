#include<iostream>

int main() {

	int n{}, upper{}, lower{}, val{};
	std::cin >> n;

	for(int i{}; i != n; ++i) {
		for(int j{}; j != n; ++j) {
			std::cin >> val;

			if(i <= j)  lower += val;
            if (i >= j) upper += val;
		}
	}

	std::cout << lower << '\n';
	std::cout << upper << '\n';

	return 0;
}
