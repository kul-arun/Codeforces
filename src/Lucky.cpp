// 1676A. Lucky?

#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        std::cout << (s[0] + s[1] + s[2] == s[3] + s[4] + s[5] ? "YES\n" : "NO\n"); 
    }
}
