#include <stdio.h>
#include <limits.h>

int main()
{
    long long int t;
    scanf("%lld", &t);
    read:
    while (t--)
    {
        long long int n, Finaleans = 0;
        scanf("%lld", &n);
        long long int a[n];
        long long int b[n];
        long long int minimum_of_a = INT_MAX;
        long long minimum_of_b = INT_MAX;
        for (long long int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            minimum_of_a = (a[i] < minimum_of_a) ? a[i] : minimum_of_a;
        }
        for (long long int i = 0; i < n; i++)
        {
            scanf("%lld", &b[i]);
            minimum_of_b = (b[i] < minimum_of_b) ? b[i] : minimum_of_b;
        }
        for (long long int i = 0; i < n; i++)
            Finaleans += (a[i] - minimum_of_a) > (b[i] - minimum_of_b) ? (a[i] - minimum_of_a) : (b[i] - minimum_of_b);
        printf("%lld\n", Finaleans);
    }
    return 0;
}
