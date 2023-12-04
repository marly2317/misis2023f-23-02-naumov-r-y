#include <iostream>
int main() {
	int t, n, x, a;
	std::cin >>t;
	bool place[200];
	for (int i = 0; i < t; ++i) {
		std::cin >> n >> x;
		for (int j = 0; j < 200; ++j) {
			place[j] = 0;
		}
		for (int j = 0; j < n; ++j) {
			std::cin >> a;
			place[a - 1] = 1;
		}
		int j = 0;
		for (j; j < 200; ++j) {
			if (place[j] == 0) {
				if (x == 0) {
					break;
				}
				x -= 1;
			}
		}
		std::cout <<j<<std::endl;
	}
}
