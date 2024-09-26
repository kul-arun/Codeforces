// 381A. Sereja and Dima

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i=0; i<n; ++i) {
        std::cin >> v[i];
    }
    int left = 0;
    int right = n-1;
    int s = 0;
    int d = 0;
    bool isSTurn = true;
    while (left <= right) {
        int maxValIdx = v[left] > v[right] ? left : right;
        isSTurn ? s += v[maxValIdx] : d += v[maxValIdx];
        maxValIdx == left ? ++left : --right;
        isSTurn = !isSTurn;
    }
    std::cout << s << " " << d << '\n';
}
