// 490A. Team Olympiad

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> v3;
    for (int i=0; i<n; ++i) {
        int x;
        std::cin >> x;
        switch(x) {
            case 1: v1.push_back(i+1); break;
            case 2: v2.push_back(i+1); break;
            case 3: v3.push_back(i+1);
        }
    }
    int min = (int) std::min({v1.size(), v2.size(), v3.size()});
    std::cout << min << '\n';
    for (int i=0; i<min; ++i) {
        std::cout << v1[i] << " " << v2[i] << " " << v3[i] << '\n';
    }
}
