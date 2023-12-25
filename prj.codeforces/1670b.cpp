#include<iostream>
using namespace std;

    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;
    while (T--) {

        int N, K; cin >> N;
        string S; cin >> S;
        cin >> K;

        int mask = 0;

        while (K--) {
            char c; cin >> c;
            mask |= (1 << (c - 97));
        }

        int ans = 0;

        for (int i = 0, j = 0; i < N; ++i) {
            if ((mask & (1 << (S[i] - 97)))) {
                ans = max(ans, i - j);
                j = i;
            }
        }

        cout << ans << '\n';

    }

    return 0;
}
