// 2009B. osu!mania

#include <iostream>
#include <vector>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> v(n);
        for (int i=0; i<n; ++i) {
            std::string s;
            std::cin >> s;
            v[i] = (int) s.find('#') + 1;
        }
        for (auto it = v.rbegin(); it != v.rend(); ++it) {
            std::cout << *it << ' ';
        }
        std::cout << '\n';
    }
}
