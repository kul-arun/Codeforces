// 1539A. Elections

#include <iostream>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;
        std::cout << std::max(0, std::max(b,c) + 1 - a) << ' '
                  << std::max(0, std::max(c,a) + 1 - b) << ' '
                  << std::max(0, std::max(a,b) + 1 - c) << '\n';

    }
}
