// 1560A. Dislike of Threes

#include <iostream>

int val[1000];

int main() {
    for (int i=0, k=1; i<1000; ++k) {
        if (k%3 != 0 && k%10 != 3) {
            val[i] = k;
            ++i;
        }
    }
    int t;
    std::cin >> t;
    while (t--) {
        int k;
        std::cin >> k;
        std::cout << val[k-1] << '\n';
    }
}
