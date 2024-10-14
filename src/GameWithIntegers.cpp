// 1899A. Game with Integers

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << (n%3 == 0 ? "Second\n" : "First\n");
    }
}
