// 41A. Translation

#include <iostream>
#include <string>

int main() {
    std::string s,t;
    std::cin >> s >> t;
    if (s.size() != t.size()) {
        std::cout << "NO\n";
        return 0;
    }
    bool isCorrect = true;
    int len = (int) s.size();
    for (int i=0; i<len; ++i) {
        if (s[len-1-i] != t[i]) {
            isCorrect = false;
            break;
        }
    }
    std::cout << (isCorrect ? "YES\n" : "NO\n");
}
