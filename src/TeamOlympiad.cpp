// 490A. Team Olympiad

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> v(3);
    for (int i=0; i<n; ++i) {
        int x;
        std::cin >> x;
        v[x-1].push_back(i+1);
    }
    int min = (int) std::min({v[0].size(), v[1].size(), v[2].size()});
    std::cout << min << '\n';
    for (int i=0; i<min; ++i) {
        std::cout << v[0][i] << " " << v[1][i] << " " << v[2][i] << '\n';
    }
}
