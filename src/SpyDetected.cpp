// 1512A. Spy Detected!

#include <iostream>
#include <unordered_map>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::unordered_map<int,int> map;
        for (int i=0, curr=0; i<n; ++i) {
            std::cin >> curr;
            if (map.contains(curr)) {
                map[curr] = 0;
            } else {
                map.insert({curr, i+1});
            }
        }
        for (auto pair : map) {
            if (pair.second != 0) {
                std::cout << pair.second << std::endl;
            }
        }
    }
}
