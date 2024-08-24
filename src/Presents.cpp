// 136A. Presents

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int tmp, i=1; i<=n; ++i) {
        std::cin >> tmp;
        v[tmp-1] = i;
    }
    for (auto item : v) {
        std::cout << item << ' ';
    }
    std::cout << std::endl;
}
