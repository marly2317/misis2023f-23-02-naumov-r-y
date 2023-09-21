#include <iostream>
int main() {
	int t, n, a, b, c, d, e;
	std::cin >> t;
	for (int i = 0; i < t; i += 1) {
		std::cin >> n;
		a = n % 10;
		n /= 10;
		b = n % 10*10;
		n /= 10;
		c = n % 10*100;
		n /= 10;
		d = n % 10 * 1000;
		n /= 10;
		e = n % 10 * 10000;
		std::cout << (a != 0) + (b != 0) + (c != 0) + (d != 0) + (e != 0)<<"\n";
		if (a) std::cout << a << " ";
		if (b) std::cout << b << " ";
		if (c) std::cout << c << " ";
		if (d) std::cout << d << " ";
		if (e) std::cout << e << " ";
		std::cout << "\n";
	}
}
