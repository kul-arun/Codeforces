// 1829A. Love Story

#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    std::string s = "codeforces";
    while (t--) {
        int count = 0;
        std::string tmp;
        std::cin >> tmp;
        for (int i=0; i<10; ++i) {
            count += (s[i] != tmp[i]);
        }
        std::cout << count << '\n';
    }
}
