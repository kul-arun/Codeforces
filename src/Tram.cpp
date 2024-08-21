// 116A. Tram

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int minCapacity = -1;
    int passengerCount = 0;
    while (n > 0) {
        int a, b;
        std::cin >> a >> b;
        passengerCount += (b - a);
        if (passengerCount > minCapacity) {
            minCapacity = passengerCount;
        }
        --n;
    }
    std::cout << minCapacity << '\n';
}
