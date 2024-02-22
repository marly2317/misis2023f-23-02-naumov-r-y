#include <iostream>
#include <array>
int main() {
	int n;
	int t = 0;
	std::cin >> n;
	float sp[100];
	float spi[100];
	for (int i = 0; i < n; i += 1) {
		std::cin >> sp[i];
	}
	for (int i = 0; i < n; i += 1) {
		spi[i] = sp[n - i - 1];
	}
	for (int j = 0; j < n; j += 1) {
		sp[j] = spi[n - j - 1];
		for (int d = 0; d < n; d += 1) {
			if (sp[j] == sp[d] && (j != d)) {
				sp[d] = 0;
			}
		}
	}
	for (int g = 0; g < n; g += 1) {
		if (sp[g] != 0) {
			t += 1;
		}
	}
	std::cout << t;
	std::cout << std::endl;
	for (int g = 0; g < n; g += 1) {
		if (sp[g] != 0) {
			t += 1;
			std::cout << sp[g] << " ";
		}
 
 
	}
}
