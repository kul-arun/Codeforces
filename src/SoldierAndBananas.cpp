// 546A. Soldier and Bananas

#include <iostream>

int main() {
    int k, n, w;
    std::cin >> k >> n >> w;
    for (int i=1; i<=w; ++i) {
        n -= i*k;
    }
    std::cout << (n < 0 ? -n : 0) << std::endl;
}
