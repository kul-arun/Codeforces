// 1352A. Sum of Round Numbers

#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (int n; t > 0; --t) {
        std::cin >> n;
        std::vector<int> v;
        int x = 10;
        while (n) {
            int tmp = n % x;
            if (tmp) {
                v.push_back(tmp);
            }
            x *= 10;
            n -= tmp;
        }
        std::cout << v.size() << '\n';
        for (auto item : v) {
            std::cout << item << ' ';
        }
        std::cout << std::endl;
    }
}
