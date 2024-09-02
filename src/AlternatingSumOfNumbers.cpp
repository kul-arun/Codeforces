// 2010A. Alternating Sum of Numbers

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, x, sum=0;
        std::cin >> n;
        for (int i=1; i<=n; ++i) {
            std::cin >> x;
            sum += (i%2 ? x : -x);
        }
        std::cout << sum << '\n';
    }
}
