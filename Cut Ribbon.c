#include <stdio.h>

int main()
{
    int a, b, c, n, k, cnt, reminder;
    while (scanf("%d %d %d %d", &n, &a, &b, &c) == 4)
    {
        cnt = 0;
        for (int i = 0; i * a <= n; ++i)
        {
            for (int j = 0; i * a + j * b <= n; ++j)
            {
                reminder = n - i * a - j * b;
                if (reminder % c == 0)
                {
                    k = reminder / c;
                    cnt = (i + j + k > cnt) ? i + j + k : cnt;
                }
            }
        }
        printf("%ld\n", cnt);
        return 0;
    }
    return 0;
}
