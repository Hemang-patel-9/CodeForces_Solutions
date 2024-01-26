#include <stdio.h>

int main()
{
    int t;
    long long a, b, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld %lld %lld", &a, &b, &n);
        long long sum = 0, c = 0;
        while (sum <= n)
        {
            if (a > b)
            {
                b += a;
                sum = b;
                c++;
            }
            else
            {
                a += b;
                sum = a;
                c++;
            }
            if (sum > n)
            {
                break;
            }
        }
        printf("%lld\n", c);
    }
    return 0;
}

