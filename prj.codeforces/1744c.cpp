#include<iostream>
using namespace std;

int t, n;
char a;
string s;

int main() {
	cin >> t;
	while (t--) {
		cin >> n >> a;
		cin >> s;
		s = '*' + s + s;
		int last = 0;
		int ans = 0;
		for (int i = 2 * n; i > 0; --i) {
			if (s[i] == 'g')last = i;
			if (s[i] == a)ans = max(ans, last - i);
		}
		cout << ans << endl;
	}
	return 0;
}