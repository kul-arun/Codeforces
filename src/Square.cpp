// 1921A. Square

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        std::cout << (x1==x2 ? (y1-y2)*(y1-y2) : (x1-x2)*(x1-x2)) << '\n';
    }
}
