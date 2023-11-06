#include <iostream>
#include <cmath>
 
int main(){
	int a, c, ans = 0, step = 0;
	std::cin >> a >> c;
	while (a != 0 || c != 0)
	{
		ans += ((c % 3 - a % 3 + 3) % 3) * pow(3, step);
		step++;
		a /= 3;
		c /= 3;
	}
	std::cout << ans;
}
