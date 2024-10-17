// 1955A. Yogurt Sale

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, a, b;
        std::cin >> n >> a >> b;
        if (b < 2*a) {
            std::cout << (n&1 ? (n/2)*b+a : (n/2)*b) << '\n';
        } else {
            std::cout << n*a << '\n';
        }
    }
}
