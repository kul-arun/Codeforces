// 2009B. osu!mania

#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> v(n);
        for (int i=0; i<n; ++i) {
            char c;
            for (int k=1; k<=4; ++k) {
                std::cin >> c;
                if (c == '#') {
                    v[i] = k;
                }
            }
        }
        for (auto it = v.rbegin(); it != v.rend(); ++it) {
            std::cout << *it << ' ';
        }
        std::cout << '\n';
    }
}
