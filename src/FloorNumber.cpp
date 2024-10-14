// 1426A. Floor Number

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;
        int floor = 1;
        n -= 2;
        while (n > 0) {
            n -= x;
            ++floor;
        }
        std::cout << floor << '\n';
    }
}
