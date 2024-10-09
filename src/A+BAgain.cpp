// 1999A. A+B Again?

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << n%10 + n/10 << '\n';
    }
}
