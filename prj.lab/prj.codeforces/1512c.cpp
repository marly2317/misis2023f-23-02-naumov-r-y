#include<iostream>
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int a, b, n;
		std::cin >> a >> b;
		n = a + b;
		std::string s;
		std::cin >> s;
		for (int i = 0; i < n; i++) {
			if (s[i] == '?') s[i] = s[n - i - 1];
		}
		a -= count(s.begin(), s.end(), '0');
		b -= count(s.begin(), s.end(), '1');
		for (int i = 0; i <= n / 2; ++i) {
			if (i != n - i - 1 && s[i] == '?') {
				if (a > 1) s[i] = s[n - i - 1] = '0', a -= 2;
				else if (b > 1) s[i] = s[n - i - 1] = '1', b -= 2;
			}
			else if (i==n-i-1 && s[i]=='?'){
				if (a) s[i]='0', a--;
				else if (b) s[i]='1',b--;
			}
		}
		std::string f = s;
		std::reverse(f.begin(), f.end());
		if (f == s && a == 0 && b == 0) std::cout << s << "\n";
		else std::cout << "-1" << "\n";
	}
}
