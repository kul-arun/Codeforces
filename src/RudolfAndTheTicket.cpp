// 1941A. Rudolf and the Ticket

#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, m, k;
        std::cin >> n >> m >> k;
        std::vector<int> b(n);
        std::vector<int> c(m);
        for (int i=0; i<n; ++i)
            std::cin >> b[i];
        for (int i=0; i<m; ++i)
            std::cin >> c[i];
        int count = 0;
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (b[i]+c[j] <= k) {
                    ++count;
                }
            }
        }
        std::cout << count << '\n';
    }
}
