#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        int x;
        int cnt = 0;
        scanf("%d", &x);
        if (x > 0 || x < 0)
        {
            if (x < 0)
            {
                x = x * -1;
            }
            if (x % 3 == 0)
            {
                cnt = x / 3;
            }
            else if (x % 3 == 1)
            {
                cnt = (x / 3) + 2;
            }
            else if (x % 3 == 2)
            {
                cnt = (x / 3) + 4;
            }
        }
        else
        {
            printf("Error!");
            return 0;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
