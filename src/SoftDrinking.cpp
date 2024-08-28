// 151A. Soft Drinking

#include <cstdio>
#include <algorithm>

int n, k, l, c, d, p, nl, np;

int main() {
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int drinksPerToast = k*l/(n*nl);
    int limeSlicesPerToast = c*d/n;
    int saltPerToast = p/(n*np);
    printf("%d\n", std::min({drinksPerToast, limeSlicesPerToast, saltPerToast}));
}
