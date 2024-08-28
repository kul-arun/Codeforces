// 155A. I_love_%username%

#include <cstdio>

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    int min = x, max = x, count = 0;
    while (n--) {
        scanf("%d", &x);
        if (x < min) {
            min = x;
            ++count;
        }
        if (x > max) {
            max = x;
            ++count;
        }
    }
    printf("%d\n", count);
}
