// 1850A. To My Critics

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a,b,c;
        std::cin >> a >> b >> c;
        if (a+b >= 10 || b+c >= 10 || c+a >= 10) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}
