// 158A. Next Round

#include <iostream>
#include <vector>

int main() {
    short n, k;
    std::cin >> n >> k;
    std::vector<short> v(n);
    for (short i=0; i<n; ++i) {
        std::cin >> v[i];
    }
    short count = 0;
    for (short x : v) {
        if (x >= v[k-1] && x > 0) {
            ++count;
        }
    }
    std::cout << count << std::endl;
}
