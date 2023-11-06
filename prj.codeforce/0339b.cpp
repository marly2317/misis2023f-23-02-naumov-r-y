#include <iostream>
int main() {
	int ndom, mdel;
	std::cin >> ndom >> mdel;
	long long res=0;
	int ldela;
	std::cin >> ldela;
	res += ldela - 1;
	for (int i = 1; i < mdel; ++i) {
		int tdela;
		std::cin >> tdela;
		res += tdela - ldela;
		if (ldela > tdela) {
			res += ndom;
		}
		ldela = tdela;
	
	}
	std::cout << res;
}
