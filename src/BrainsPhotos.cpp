// 707A. Brain's Photos

#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    bool isColored = false;
    char c;
    while (std::cin >> c) {
        if (c == 'C' || c == 'M' || c == 'Y') {
            isColored = true;
            break;
        }
    }
    std::cout << (isColored ? "#Color\n" : "#Black&White\n");
}
