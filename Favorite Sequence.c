#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for(int v=0;v<x;v++)
    {
        long int n;
        scanf("%ld", &n);
        long long int arr[n];
        for(long int a=0;a<n;a++)
        {
            scanf("%lld", &arr[a]);
        }
        if(n%2==0)
        {
            for(long int a=0;a<n/2;a++)
            {
                printf("%lld ", arr[a]);
                printf("%lld ", arr[n-a-1]);
            }
            printf("\n");
        }
        else
        {
            for(long int a=0;a<(n/2);a++)
            {
                printf("%lld ", arr[a]);
                printf("%lld ", arr[n-a-1]);
            }
                printf("%lld ", arr[(n/2)]);
            printf("\n");
        }
    }

    return 0;
}
