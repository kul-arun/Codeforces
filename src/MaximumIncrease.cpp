// 702A. Maximum Increase

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int maxCount = 1;
    int prev;
    std::cin >> prev;
    for (int currentCount=1, curr; std::cin >> curr; ) {
        if (curr > prev) {
            ++currentCount;
        } else {
            currentCount = 1;
        }
        if (maxCount < currentCount) {
            maxCount = currentCount;
        }
        prev = curr;
    }
    std::cout << maxCount << '\n';
}
