// 1371A. Magical Sticks

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << n/2 + n%2 << '\n';
    }
}
