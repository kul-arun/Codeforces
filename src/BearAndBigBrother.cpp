// 791A. Bear and Big Brother

#include <iostream>

int main() {
    short a, b;
    std::cin >> a >> b;
    short year = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        ++year;
    }
    std::cout << year << std::endl;
}
