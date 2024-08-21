// 110A. Nearly Lucky Number

#include <iostream>

int main() {
    char c;
    int count = 0;
    while (std::cin >> c) {
        if (c == '4' || c == '7') {
            ++count;
        }
    }
    std::cout << (count == 4 || count == 7 ? "YES" : "NO") << '\n';
}
