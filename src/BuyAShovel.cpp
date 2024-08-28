// 732A. Buy a Shovel

#include <cstdio>

int main() {
    int k, r;
    scanf("%d%d", &k, &r);
    int n = k;
    while (true) {
        if (n%10 == 0 || n%10 == r) {
            break;
        }
        n += k;
    }
    printf("%d\n", n/k);
}
