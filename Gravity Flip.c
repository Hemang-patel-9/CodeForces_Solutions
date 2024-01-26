#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int flag=0;
    int max;
    for(int a=0;a<n;a++)
    {
        scanf("%d", &arr[a]);
    }
    for(int a=0;a<n;a++)
    {
        for(int b=a+1;b<n;b++)
        {
            if(arr[a]>arr[b])
            {
                int tmp=arr[a];
                arr[a]=arr[b];
                arr[b]=tmp;
            }
        }
    }
    for(int a=0;a<n;a++)
    {
        printf("%d ", arr[a]);
    }

    return 0;
}
