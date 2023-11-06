#include<iostream>
int main() {
	int t; 
	std::cin >> t;
	while (t--) {
		int n; std::cin >> n; std::cout << "1\n";
		for (int i = 1; i < n; i++) {
			std::cout << "1 ";
			for (int j = 1; j < i; j++) {
				std::cout << "0 ";
			}
			std::cout << "1\n";
			
		}
	}
}
