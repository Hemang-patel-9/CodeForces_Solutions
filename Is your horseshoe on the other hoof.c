#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    long int arr[4];

    for(int a=0;a<4;a++)
    {
        scanf("%ld", &arr[a]);
    }
    for(int a=0;a<4;a++)
    {
        int tmp=0;
        for(int b=a+1;b<4;b++)
        {
            if(arr[a]>arr[b])
            {
                tmp=arr[a];
                arr[a]=arr[b];
                arr[b]=tmp;
            }
        }
    }
    int count=1;
    for(int a=0;a<4;a++)
    {
        if(arr[0]==arr[a])
        {
            count++;
        }
    }
    if(count==4)
    {
        count=3;
    }
    printf("%ld", count);
    return 0;
}
