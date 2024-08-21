// 977A. Wrong Subtraction

#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    while (k > 0) {
        n = (n%10 == 0 ? n/10 : n-1);
        --k;
    }
    std::cout << n << std::endl;
}
