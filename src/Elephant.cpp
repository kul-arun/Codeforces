// 617A. Elephant

#include <iostream>

int main() {
    int x;
    std::cin >> x;
    int count = 0;
    short tmp = 5;
    while (x > 0) {
        count += x / tmp;
        x %= tmp;
        --tmp;
    }
    std::cout << count << std::endl;
}
