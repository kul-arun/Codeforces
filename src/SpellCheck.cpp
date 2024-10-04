// 1722A. Spell Check

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        std::sort(s.begin(), s.end());
        std::cout << (s == "Timru" ? "YES\n" : "NO\n");
    }
}
