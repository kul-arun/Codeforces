// 1527A. And Then There Were K

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int ans = 1;
        while (ans <= n) {
            ans <<= 1;
        }
        std::cout << (ans>>1) - 1 << '\n';
    }
}
