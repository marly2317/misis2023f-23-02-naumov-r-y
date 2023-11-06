#include <iostream>
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n, k;
		std::string s;
		std::cin >> n >> k >> s;
		int c = 0;
		int ans = 9999999999;
		for (int i = 0; i < n; ++i) {
			if (s[i] == 'W')	c += 1;
			if (i >= k && s[i - k] == 'W')	c -= 1;
			if (i >= k - 1)	ans = std::min(ans, c);
		}
		std::cout << ans << "\n";
	}
}
