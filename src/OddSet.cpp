// 1542A. Odd Set

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int oddCount = 0;
        for (int tmp, i=0; i<2*n; ++i) {
            std::cin >> tmp;
            oddCount += (tmp&1 ? 1 : 0);
        }
        std::cout << (oddCount == n ? "Yes\n" : "No\n");
    }
}
