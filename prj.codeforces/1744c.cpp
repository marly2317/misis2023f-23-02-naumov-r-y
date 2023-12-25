#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m = 0;
        char c;
        string s;
        cin >> n >> c >> s;
        for (int i = 0; i < s.length(); i++) {
            if (c == s[i]) m = max(i - m, m);
        }
        cout << m << endl;
    }
    return 0;
}