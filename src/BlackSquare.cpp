// 431A. Black Square

#include <iostream>

int main() {
    int a[4];
    std::cin >> a[0] >> a[1] >> a[2] >> a[3];
    int result = 0;
    char c;
    while (std::cin >> c) {
        result += a[c - '1'];
    }
    std::cout << result << '\n';
}
