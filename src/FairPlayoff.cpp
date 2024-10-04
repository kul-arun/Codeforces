// 1535A. Fair Playoff

#include <iostream>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int s1, s2, s3, s4;
        std::cin >> s1 >> s2 >> s3 >> s4;
        bool isFair = std::min(s1, s2) < std::max(s3, s4) &&
                      std::min(s3, s4) < std::max(s1, s2);
        std::cout << (isFair ? "YES\n" : "NO\n"); 
    }
}
