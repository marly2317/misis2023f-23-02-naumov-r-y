#include<iostream>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		int n, k; string s; cin >> n >> k >> s;
		bool ok = 1;
		for (int i = 0; i < n; i++)
		{
			if (s[i] != '?' && s[i % k] != '?' && s[i] != s[i % k]) { ok = 0; break; }
			if (s[i] != '?') s[i % k] = s[i];
		}
		int one = 0, zero = 0;
		for (int i = 0; i < k; i++)
		{
			one = one + (s[i] == '1');
			zero = zero + (s[i] == '0');
		}
		if (ok && zero <= k / 2 && one <= k / 2)cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}