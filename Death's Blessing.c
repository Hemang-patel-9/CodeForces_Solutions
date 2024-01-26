#include<stdio.h>
int main()
{
    int testcase;
    long long int sum=0;
    int flag=0;
    scanf("%d", &testcase);
    for(int a=0;a<testcase;a++)
    {
        sum=0;
        long long int n;
        scanf("%lld", &n);
        long long int arr1[n];
        long long int arr2[n];
        for(int b=0;b<n;b++)
        {
            scanf("%lld", &arr1[b]);
            sum=sum+arr1[b];
        }
        long long int max=-1;
        for(int b=0;b<n;b++)
        {
            scanf("%lld", &arr2[b]);
            if(max<arr2[b])
            {
                max=arr2[b];
            }
            sum=sum+arr2[b];
        }
        printf("%lld\n", sum-max);
    }
}
