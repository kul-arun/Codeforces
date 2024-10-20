// 1537A. Arithmetic Array

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int sum = 0;
        for (int tmp,i=0; i<n; ++i) {
            std::cin >> tmp;
            sum += tmp;
        }
        std::cout << (n == sum ? 0 : (n < sum ? sum-n : 1)) << '\n';
    }
}
