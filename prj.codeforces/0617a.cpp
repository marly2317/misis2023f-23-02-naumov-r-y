#include <iostream>
int main() {
	int c;
	std::cin >> c;
	if (c % 5 == 0) {
		std::cout << c / 5;
	}
	else if (c > 5){
		std::cout << c / 5 + 1;
	}
	else if (c<5){
		std::cout << 1;
	}
	
}
