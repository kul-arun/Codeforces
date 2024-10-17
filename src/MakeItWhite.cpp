// 1927A. Make it White

#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        std::cout << (s.find_last_of('B') - s.find_first_of('B') + 1) << '\n';
    }
}
