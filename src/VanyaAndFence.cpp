// 677A. Vanya and Fence

#include <iostream>

int main() {
    short n, h;
    std::cin >> n >> h;
    short tmp, width = 0;
    while (std::cin >> tmp) {
        width += (tmp > h ? 2 : 1);
    }
    std::cout << width << '\n';
}
