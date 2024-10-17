// 1878A. How Much Does Daytona Cost?

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        bool kFound = false;
        for (int tmp; n-- && std::cin >> tmp; ) {
            if (tmp == k) {
                kFound = true;
            }
        }
        std::cout << (kFound ? "YES\n" : "NO\n");
    }
}
