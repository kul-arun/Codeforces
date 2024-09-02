// 9A. Die Roll

#include <iostream>
#include <algorithm>
#include <numeric>

int main() {
    int y, w;
    std::cin >> y >> w;
    int numerator = 7 - std::max(y, w);
    int gcd = std::gcd(numerator, 6);
    std::cout << numerator/gcd << '/' << 6/gcd << '\n';
}
