// 432A. Choosing Teams

#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    int count = 0;
    while (n--) {
        int x;
        std::cin >> x;
        if (x <= 5-k) {
            ++count;
        }
    }
    std::cout << count / 3 << '\n';
}
