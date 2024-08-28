// 581A. Vasya the Hipster

#include <cstdio>

int a, b, diffPair, samePair;

int main() {
    scanf("%d%d", &a, &b);
    while (a > 0 && b > 0) {
        ++diffPair;
        --a;
        --b;
    }
    samePair = a > 0 ? a/2 : b/2;
    printf("%d %d\n", diffPair, samePair);
}
