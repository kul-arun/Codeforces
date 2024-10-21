// 1702A. Round Down the Price

#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int m;
        std::cin >> m;
        std::cout << m - int(std::pow(10, int(std::log10(m)))) << '\n';
    }
}
