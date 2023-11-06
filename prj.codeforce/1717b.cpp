#include<iostream>
int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n = 0;
        std::cin >> n;
        int k = 0;
        std::cin >> k;
        int r = 0;
        std::cin >> r;
        int c = 0;
        std::cin >> c;
        for (int j = 1; j <= n; j++) {
            for (int h = 1; h <= n; h++) {
                if (((j - r) + (h - c)) % k == 0) std::cout << 'X';
                else std::cout << '.';
            }
            std::cout << "\n";
        }
    }
    return 0;
}
