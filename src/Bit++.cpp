// 282A. Bit++

#include <iostream>
#include <string>

int main() {
    short x = 0;
    short n;
    std::cin >> n;
    while (n > 0) { 
        std::string str;
        std::cin >> str;
        str[1] == '+' ? ++x : --x;
        --n;
    }
    std::cout << x << std::endl;
}
