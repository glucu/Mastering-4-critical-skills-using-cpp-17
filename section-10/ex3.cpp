#include<iostream>

int main() {

    const int kRow{100};
    const int kCol{100};
	int arr1[kRow][kCol]{};
	int arr2[kRow][kCol]{};

	int n{}, m{};
    std::cin >> n >> m;

	for(int i{}; i != n; ++i)
		for(int j{}; j != m; ++j)
			std::cin >> arr1[i][j];

	for(int i{}; i != n; ++i)
		for(int j{}; j != m; ++j)
			arr2[j][i] = arr1[i][j];

	for(int i{}; i != m; ++i) {
		for(int j{}; j != n; ++j)
			std::cout << arr2[i][j] << ' ';
		std::cout << '\n';
	}

	return 0;
}