#include <stdio.h>

int main() {
    long p;
    scanf("%ld", &p);
    while (p--) {
        long a, b, c;
        scanf("%ld %ld %ld", &a, &b, &c);
        long mx = (a > b) ? a : b;
        mx = (mx > c) ? mx : c;
        int allEQ = (((a == mx) + (b == mx) + (c == mx)) > 1);
        long u = (a == mx) ? allEQ : (mx + 1 - a);
        long v = (b == mx) ? allEQ : (mx + 1 - b);
        long w = (c == mx) ? allEQ : (mx + 1 - c);
        printf("%ld %ld %ld\n", u, v, w);
    }
}
