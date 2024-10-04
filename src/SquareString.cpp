// 1619A. Square String?

#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        int mid = s.size()/2;
        auto p1 = s.substr(0, mid);
        auto p2 = s.substr(mid);
        std::cout << (p1 == p2 ? "YES\n" : "NO\n");
    }
}
