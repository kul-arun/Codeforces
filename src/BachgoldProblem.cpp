// 749A. Bachgold Problem

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::cout << n/2 << '\n';
    while (n) {
        int p = n^3 ? 2 : 3;
        std::cout << p << ' ';
        n -= p;
    }
    std::cout << '\n';
}
