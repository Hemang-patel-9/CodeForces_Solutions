#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum=0;
    int arr[n][n];
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<n;b++)
        {
            if(a==b)
            {
                sum+=arr[a][b];
            }
            if(a==((n-1)/2))
            {
                sum+=arr[a][b];
            }
            if(b==((n-1)/2))
            {
                sum+=arr[a][b];
            }
            if(a==n-b-1)
            {
                sum+=arr[a][b];
            }
        }
    }
    printf("%d", sum-(3*arr[(n-1)/2][(n-1)/2]));
    return 0;
}
