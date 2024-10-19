// 686A. Free Ice Cream

#include <iostream>

int main() {
    int n, x;
    std::cin >> n >> x;
    int distressedKids = 0;
    while (n--) {
        char op;
        int d;
        std::cin >> op >> d;
        if (op == '+') {
            x += d;
        } else {
            if (x-d < 0) {
                ++distressedKids;
            } else {
                x -= d;
            }
        }
    }
    std::cout << x << ' ' << distressedKids << '\n';
}
