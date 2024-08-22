// 486A. Calculating Function

#include <iostream>

int main() {
    long long n;
    std::cin >> n;
    std::cout << (n & 1 ? -n/2 - 1 : n/2) << '\n';
}
