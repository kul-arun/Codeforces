// 703A. Mishka and Game

#include <iostream>
#include <print>

int main() {
    int n;
    std::cin >> n;
    int mCount = 0;
    int cCount = 0;
    while (n--) {
        int m, c;
        std::cin >> m >> c;
        mCount += m > c;
        cCount += c > m;
    }
    if (mCount > cCount) {
        std::println("Mishka");
    } else if (cCount > mCount) {
        std::println("Chris");
    } else {
        std::println("Friendship is magic!^^");
    }
}
