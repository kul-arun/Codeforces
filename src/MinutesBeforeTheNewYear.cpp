// 1283A. Minutes Before the New Year

#include <iostream>

int main() {
    int totalMin = 24 * 60;
    int t;
    std::cin >> t;
    while (t--) {
        int h, m;
        std::cin >> h >> m;
        std::cout << totalMin - (h * 60 + m) << '\n';
    }
}
