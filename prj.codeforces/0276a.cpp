#include <iostream>
#include <vector>
int main() {
	std::vector <int> sp;
	int n, k,fi,ti,res;
	int max;
	std::cin >> n >> k;
	for (int i = 0; i < n; i += 1) {
		std::cin >> fi >> ti;
		if (ti > k) {
			res = fi - ti + k;
			sp.push_back(res);
			
		}
		else {
			res = fi;
			sp.push_back(res);
		}
	}
	max = *max_element(sp.begin(), sp.end());
	std::cout << max;
}
