// 1873. Short Sort

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    char c;
    while (t--) {
        int count = 0;
        char tmp = 'a';
        for (int i=0; i<3; ++i) {
            std::cin >> c;
            count += (c != tmp);
            ++tmp;
        }
        std::cout << (count > 2 ? "NO\n" : "YES\n");
    }
}
