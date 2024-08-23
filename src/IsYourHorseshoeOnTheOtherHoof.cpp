// 228A. Is your horseshoe on the other hoof?

#include <iostream>

int main() {
    int s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;
    std::cout << (s1 == s2 || s1 == s3 || s1 == s4) +
                 (s2 == s3 || s2 == s4) +
                 (s3 == s4);
    std::cout << std::endl;
}
