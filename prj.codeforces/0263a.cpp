#include <iostream>
int main() {
	int q;
	int i;
	int j;
	for (int i=0; i < 5; i += 1) {
		for (int j = 0; j < 5; j += 1) {
			std::cin >> q;
			if (q) std::cout << abs(i - 2) + abs(j - 2);
			
 
		}
	}
	return 0;
}
