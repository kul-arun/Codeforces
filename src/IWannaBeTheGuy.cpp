// 469A. I Wanna Be the Guy

#include <iostream>
#include <unordered_set>

int main() {
    short n;
    std::cin >> n;
    std::unordered_set<int> set;
    short p;
    std::cin >> p;
    while (p-- > 0) {
        short tmp;
        std::cin >> tmp;
        set.insert(tmp);
    }
    short q;
    std::cin >> q;
    while (q-- > 0) {
        short tmp;
        std::cin >> tmp;
        set.insert(tmp);
    }
    std::cout << (n == set.size() ? "I become the guy.\n" : "Oh, my keyboard!\n");
}
