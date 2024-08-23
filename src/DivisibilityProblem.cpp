// 1328A. Divisibility Problem

#include <iostream>

int main() {
    short t;
    std::cin >> t;
    int a, b;
    while (t-- > 0) {
        std::cin >> a >> b;
        std::cout << (b - a%b) % b << std::endl;
    }
}
