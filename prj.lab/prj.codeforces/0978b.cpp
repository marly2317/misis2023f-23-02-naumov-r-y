#include <iostream>
#include <string>
 
int main()
{
    int n;
    int c = 0;
    std::string s;
    std::cin >> n;
    std::cin >> s;
    while (s.find("xxx")<s.length()) {
        s.erase(s.find("xxx"),1);
        c += 1;
       
    }
    std::cout << c;
    
}
