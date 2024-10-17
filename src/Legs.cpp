// 1996A. Legs

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << n/4 + (n%4)/2 << '\n';
    }
}
