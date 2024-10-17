// 1986A. X Axis

#include <iostream>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x1, x2, x3;
        std::cin >> x1 >> x2 >> x3;
        std::cout << std::max({x1,x2,x3}) - std::min({x1,x2,x3}) << '\n';
    }
}
