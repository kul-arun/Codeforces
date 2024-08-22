// 200B. Drinks

#include <iostream>

int main() {
    short n;
    std::cin >> n;
    short sum = 0;
    short tmp;
    while (std::cin >> tmp) {
        sum += tmp;
    }
    std::cout << 1.0 * sum / n << '\n';
}
