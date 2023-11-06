#include <iostream>
#include <vector>
int main() {
	int t;
	std::cin >> t;
	for (int h = 0; h < t; ++h) {
		int n;
		int a;
		int mx = 0;
		std::cin >> n;
		std::vector <int> sp;
		for (int i = 0; i < n; ++i) {
			std::cin >> a;
			sp.push_back(a);
		}
		int res = sp[0];
		for (int j=0; j < n; ++j) {
			res = res & sp[j];
		}
		std::cout << res<<std::endl;
	}
}
