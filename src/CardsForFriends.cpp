// 1472A. Cards for Friends

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int w, h, n;
        std::cin >> w >> h >> n;
        int count = 1;
        while (true) {
            if (w%2 == 0) {
                w /= 2;
                count *= 2;
            } else if (h%2 == 0) {
                h /= 2;
                count *= 2;
            } else {
                break;
            }
        }
        std::cout << (count >= n ? "YES\n" : "NO\n");
    }
}

