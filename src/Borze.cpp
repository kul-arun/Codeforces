// 32B. Borze

#include <iostream>

int main() {
    char c;
    while (std::cin >> c) {
        if (c == '.') {
            std::cout << 0;
        } else {
            std::cin >> c;
            std::cout << (c == '.' ? 1 : 2);
        }
    }
    std::cout << '\n';
}
