// 1985A. Creating Words

#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s1, s2;
        std::cin >> s1 >> s2;
        auto tmp = s1[0];
        s1[0] = s2[0];
        s2[0] = tmp;
        std::cout << s1 << " " << s2 << '\n';
    }
}
