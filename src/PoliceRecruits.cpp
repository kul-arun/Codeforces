// 427A. Police Recruits

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int policeAvailable = 0;
    int untreatedCrimes = 0;
    for (int event; n > 0; --n) {
        std::cin >> event;
        if (event > 0) {
            policeAvailable += event;
        } else {
            policeAvailable > 0 ? --policeAvailable : ++untreatedCrimes;
        }
    }
    std::cout << untreatedCrimes << '\n';
}
