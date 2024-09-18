// 2009C. The Legend of Freya the Frog

#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x, y, k;
        std::cin >> x >> y >> k;
        int a = std::ceil((double)x / k);
        int b = std::ceil((double)y / k);
        std::cout << std::max(2*a-1, 2*b) << '\n';
    }
}
