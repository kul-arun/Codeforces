// 1971A. My First Sorting Problem

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x, y;
        std::cin >> x >> y;
        if (y < x) {
            y ^= x;
            x ^= y;
            y ^= x;
        }
        std::cout << x << ' ' << y << '\n';
    }
}
