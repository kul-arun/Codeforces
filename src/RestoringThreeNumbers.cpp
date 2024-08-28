// 1154A. Restoring Three Numbers

#include <cstdio>
#include <algorithm>

int main() {
    int x[4];
    for (int i=0; i<4; ++i) {
        scanf("%d", &x[i]);
    }
    std::sort(x, x+4);
    for (int i=0; i<3; ++i) {
        printf("%d ", x[3]-x[i]);
    }
}
