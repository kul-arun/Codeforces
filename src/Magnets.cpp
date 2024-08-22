// 344A. Magnets

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int count = 0;
    int prev = -1, curr = 0;
    while (std::cin >> curr) {
        if (curr != prev) {
            ++count;
        }
        prev = curr;
    }
    std::cout << count << '\n';
}
