// Lights Out
#include <stdio.h>
int a[3][3];
void find(int i, int j, int x)
{
    a[i][j] += x;
    if (j + 1 < 3)
    {
        a[i][j + 1] += x;
    }
    if (j - 1 > -1)
    {
        a[i][j - 1] += x;
    }
    if (i + 1 < 3)
    {
        a[i + 1][j] += x;
    }
    if (i - 1 > -1)
    {
        a[i - 1][j] += x;
    }
}
int main()
{
    int x;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &x);
            find(i, j, x);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}
