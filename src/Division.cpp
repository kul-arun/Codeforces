// 1669A. Division?

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int rating;
        std::cin >> rating;
        rating /= 100;
        std::cout << "Division " << (1 + (rating < 19) + (rating < 16) + (rating < 14)) << '\n';
    }
}
