#include <iostream>
int main() {
	int t;
	std::cin >>t;
	for (int i = 0; i < t; ++i) {
		int len;
		std::cin >>len;
		int dis;
		std::cin >> dis;
		std::string  s;
		std::cin >> s;
		int ans=0;
		for (int j = 0; j < len; ++j) {
			if (s[j] == 'B') {
				j += dis - 1;
				ans += 1;
			}
		}
		std::cout <<ans<<std::endl;
	}
}
