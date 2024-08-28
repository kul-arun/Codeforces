// 1742A. Sum

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;
        std::cout << (a+b == c || b+c == a || c+a == b ? "YES\n" : "NO\n");
    }
}
