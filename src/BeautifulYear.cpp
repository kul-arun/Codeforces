// 271A. Beautiful Year

#include <iostream>
#include <unordered_set>

int main() {
    short y;
    std::cin >> y;
    short res = y+1;
    std::unordered_set<int> set;
    while (true) {
        short tmp = res;
        while (tmp > 0) {
            set.insert(tmp % 10);
            tmp /= 10;
        }
        if (set.size() == 4) {
            break;
        }
        set.clear();
        ++res;
    }
    std::cout << res << std::endl;
}
