// 61A. Ultra-Fast Mathematician

#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    int len = (int) s1.size();
    for (int i=0; i<len; ++i) {
        std::cout << (s1[i] == s2[i] ? 0 : 1);
    }
    std::cout << '\n';
}
