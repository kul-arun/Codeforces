// 1030A. In Search of an Easy Problem

#include<iostream>

int main() {
    short n;
    std::cin >> n;
    while (std::cin >> n) {
        if (n == 1) {
            std::cout << "HARD\n";
            return 0;
        }
    }
    std::cout << "EASY\n";
}
