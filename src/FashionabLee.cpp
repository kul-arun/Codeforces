// 1369A. FashionabLee

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << (n%4 == 0 ? "YES\n" : "NO\n");
    }
}
