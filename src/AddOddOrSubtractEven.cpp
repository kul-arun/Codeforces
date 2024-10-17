// 1311A. Add Odd or Subtract Even

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        int moveCount = 0;
        if (a < b) {
            moveCount = (b-a)&1 ? 1 : 2;
        }
        if (a > b) {
            moveCount = (a-b)&1 ? 2 : 1;
        }
        std::cout << moveCount << '\n';
    }
}
