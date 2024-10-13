// 80A. Panoramix's Prediction

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    auto it = std::lower_bound(primes.begin(), primes.end(), n+1);
    std::cout << (*it == m ? "YES\n" : "NO\n");
}
