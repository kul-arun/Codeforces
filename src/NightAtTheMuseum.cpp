// 731A. Night at the Museum

#include <iostream>
#include <algorithm>

int main() {
    char prev = 'a';
    int ans = 0;
    char curr;
    while (std::cin >> curr) {
        int tmp = std::abs(prev%32 - curr%32);
        ans += std::min(tmp, 26-tmp); 
        prev = curr;
    }
    std::cout << ans << '\n';
}
