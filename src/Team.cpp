// 231A. Team

#include <iostream>

int main() {
    short n;
    std::cin >> n;
    short count = 0;
    while (n > 0) {
        short a, b, c;
        std::cin >> a >> b >> c;
        if ((a + b + c) > 1)
            ++count;
        --n;
    }
    std::cout << count << std::endl;
}
