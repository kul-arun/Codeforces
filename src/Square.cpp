// 1921A. Square

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int min_x=1001, max_x=-1001;
        int min_y=1001, max_y=-1001;
        for (int x, y, i=0; i<4 && std::cin >> x >> y; ++i) {
            if (x < min_x) {
                min_x = x;
            }
            if (x > max_x) {
                max_x = x;
            }
            if (y < min_y) {
                min_y = y;
            }
            if (y > max_y) {
                max_y = y;
            }
        }
        std::cout << (max_x-min_x) * (max_y-min_y) << '\n';
    }
}
