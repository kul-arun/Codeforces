// 1368A. C+=

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, n;
        std::cin >> a >> b >> n;
        int count = 0;
        while (a<=n && b<=n) {
            a<b ? a+=b : b+=a;
            ++count;
        }
        std::cout << count << '\n';
    }
}
