// 492A. Vanya and Cubes

#include <iostream>

int main() {
    int cubes;
    std::cin >> cubes;
    int height = 0;
    int i = 1;
    while (true) {
        cubes -= i*(i+1)/2;
        if (cubes < 0) {
            break;
        }
        ++height;
        ++i;
    }
    std::cout << height << '\n';
}
