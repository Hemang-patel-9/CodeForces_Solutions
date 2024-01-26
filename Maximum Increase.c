#include <stdio.h>
int main() {
    int n, pRead, cRead;
    scanf("%d", &n);
    int count = 0;
    int max = 0;
    scanf("%d", &pRead);
    for (int i = 1; i < n; i++) {
        scanf("%d", &cRead);
        if (pRead < cRead) {
            count++;
            if (count > max) {
                max = count;
            }
        }
        else {
            count = 0;
        }
        pRead = cRead;
    }
    printf("%d", max + 1);
    return 0;
}
