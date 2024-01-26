#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for(int a=0;a<x;a++)
    {
        int arr[3];
        for(int a=0;a<3;a++)
        {
            scanf("%d", &arr[a]);
        }
        for(int a=0;a<3;a++)
        {
            for(int b=a+1;b<3;b++)
            {
                if(arr[a]<arr[b])
                {
                    int tmp=arr[a];
                    arr[a]=arr[b];
                    arr[b]=tmp;
                }
            }
        }
        printf("%d\n", arr[1]);
    }

    return 0;
}
