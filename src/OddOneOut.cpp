// 1915A. Odd One Out

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a,b,c;
        std::cin >> a >> b >> c;
        std::cout << (a ^ b ^ c) << '\n';
    }
}
