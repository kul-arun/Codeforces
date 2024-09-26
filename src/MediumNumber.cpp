// 1760A. Medium Number

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    std::vector<int> v(3);
    while (t--) {
        std::cin >> v[0] >> v[1] >> v[2];
        std::sort(v.begin(), v.end());
        std::cout << v[1] << '\n';
    }
}
