#include <iostream>
#include <string>

int main() {

	std::string num;
	std::cin >> num;

	size_t sz{ num.size() };

	size_t carry{};
	for (size_t i{}; i != sz; ++i) {
		size_t digit{ num[sz - 1 - i] - '0' };

		if (i < 4)
			digit += 5;
		digit += carry;		

		if (digit >= 10)
			digit -= 10, carry = 1;
		else
			carry = 0;

		num[sz - 1 - i] = digit + '0';
	}

	if(carry)
		std::cout << 1;

	std::cout << num;

	return 0;
}