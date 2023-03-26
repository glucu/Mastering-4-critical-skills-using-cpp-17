#include <iostream>

int main() {

    const int kSize{270 + 500 + 1};
    int frequencies[kSize]{};
    
	int n{};
	std::cin >> n;

	for(int i{}; i != n; ++i) {
		int num{};
		std::cin >> num;

		num += 500;
		frequencies[num]++;
	}

	int mx_pos{};
	for(int i{}; i != kSize; ++i) {
		if (frequencies[mx_pos] < frequencies[i])
			mx_pos = i;
	}

	std::cout << mx_pos - 500 << " repeated " << frequencies[mx_pos] << " times\n";
}