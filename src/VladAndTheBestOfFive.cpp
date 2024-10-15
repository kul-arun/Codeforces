// 1926A. Vlad and the Best of Five

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        std::cout << (std::ranges::count(s, 'A') > 2 ? "A\n" : "B\n");
    }
}
