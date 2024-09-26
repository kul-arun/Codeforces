// 472A. Design Tutorial: Learn from Math

#include <iostream>

bool isPrime(int);

int main() {
    int n;
    std::cin >> n;
    int a = 4;
    int b = 0;
    while (true) {
        b = n - a;
        if (!isPrime(a) && !isPrime(b)) {
            break;
        }
        ++a;
    }
    std::cout << a << " " << b << '\n';
}

bool isPrime(int n) {
    for (int i=2; i*i<=n; ++i) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}
