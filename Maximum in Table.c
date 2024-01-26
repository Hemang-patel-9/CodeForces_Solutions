#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n][n];
    long long int sum=0;
    for(int a=0;a<n;a++)
    {
        sum=0;
        for(int b=0;b<n;b++)
        {
            if(a==0)
            {
                arr[a][b]=1;
            }
            else
            {
                sum+=arr[a-1][b];
                arr[a][b]=sum;
            }
        }
    }
    printf("%lld", arr[n-1][n-1]);
    return 0;
}
