#include <iostream>
int main() {
	int t;
	std::cin >> t;
	for (int h = 0; h < t; h++) {
		int n, m, sx, sy, d;
		std::cin >> n>> m>> sx>> sy>> d;
		if ((sx + d >= n && sx - d <= 1)
			|| (sy + d >= m) && (sy - d <= 1)
			|| (sx - d <= 1 && sy - d <= 1)
			|| (sx + d >= n && sy + d >= m)) {
			std::cout << -1 << std::endl;
		}
		else {
			std::cout << n + m - 2 << std::endl;
		}
 
	}
}
