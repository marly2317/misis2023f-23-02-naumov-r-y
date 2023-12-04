#include <iostream>
#include <string>
int main() {
	int g;
	std::cin >> g;
	for (int i = g + 1; i < (g + 1000); i += 1) {
		std::string s = std::to_string(i);
		int sp[4] = { s[0],s[1],s[2],s[3] };
		if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3]) {
			std::cout << i;
			break;
		}
	}
}
