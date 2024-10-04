// 1433A. Boring Apartments

#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x;
        std::cin >> x;
        int digit = x%10;
        int ans = (digit - 1) * 10;
        int digit_count = (int) (std::log10(x) + 1);
        ans += digit_count * (digit_count + 1) / 2 ;
        std::cout << ans << '\n';
    }
}
