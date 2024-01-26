#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%s", str);
    char arr[100];
    strcpy(arr, str);
    char p = 'a';
    int sum = 0;
    for (int i = 0; i < strlen(arr); i++) {
        if (abs(arr[i] - p) > 13)
            sum += (26 % (abs(arr[i] - p)));
        else
            sum += (abs(arr[i] - p));
        p = arr[i];
    }
    printf("%d\n", sum);
    return 0;
}
