#include <iostream>
 
using std::cin;
using std::cout;
int f(int x, int y) {
	if (8 < x || x < 1 || 8 < y || y < 1) return 1;
	if (7 < x || x < 2 || 7 < y || y < 2) return 2;
	if (6 < x || x < 3 || 6 < y || y < 3) return 3;
	if (5 < x || x < 4 || 5 < y || y < 4) return 4;
	else {
		return 5;
	}
 
}
 
int main() {
	int t;
	cin >> t;
	for (int h = 0; h < t; ++h) {
		int ans = 0;
		for (int i = 0; i < 10; ++i) {
			std::string s;
			cin >> s;
			for (int j = 0; j < 10; ++j) {
				if (s[j] == 'X') {
					ans += f(i, j);
 
				}
			}
		}
		cout << ans<<"\n";
	}
}
