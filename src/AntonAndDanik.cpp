// 734A. Anton and Danik

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    char c;
    int countOfA = 0;
    while (n > 0) {
        std::cin >> c;
        if (c == 'A') {
            ++countOfA;
        } else {
            --countOfA;
        }
        --n;
    }
    if (countOfA > 0) {
        std::cout << "Anton\n";
    } else if (countOfA < 0) {
        std::cout << "Danik\n";
    } else {
        std::cout << "Friendship\n";
    }
}
