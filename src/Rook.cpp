// 1907A. Rook

#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        char file;
        int rank;
        std::cin >> file >> rank;
        for (int i=1; i<=8; ++i) {
            if (i == rank) {
                continue;
            }
            std::cout << file << i << '\n';
        }
        for (char c='a'; c<='h'; ++c) {
            if (c == file) {
                continue;
            }
            std::cout << c << rank << '\n';
        }
    }
}
