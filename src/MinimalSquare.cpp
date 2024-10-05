// 1360A. Minimal Square

#include <iostream>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        int ans = std::min(std::max(2*a, b), std::max(a, 2*b));
        std::cout << ans * ans << '\n';
    }
}
