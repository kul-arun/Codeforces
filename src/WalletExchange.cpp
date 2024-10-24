// 1919A. Wallet Exchange

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        std::cout << ((a+b)&1 ? "Alice\n" : "Bob\n");
    }
}
