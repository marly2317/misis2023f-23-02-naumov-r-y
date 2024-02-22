#include<iostream>
using namespace std;


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool b = true;
        for (int i = 0; i < n; i++) {
            if (s[i] != 'W') {
                int r = 0, bl = 0;
                while (i < n && s[i] != 'W') {
                    r += s[i] == 'R';
                    bl += s[i] == 'B';
                    i++;
                }
                if (r == 0 || bl == 0) { b = false; break; }
            }

        }

        cout << (b ? "YES" : "NO") << endl;
    }
}