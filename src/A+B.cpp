// 1772A. A+B?

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        char op;
        int a, b;
        std::cin >> a >> op >> b;
        std::cout << a+b << '\n';
    }
}
