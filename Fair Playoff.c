#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for(int v=0;v<x;v++)
    {
        int arr[4];
        int max1=0;
        int max2=0;
        for(int a=0;a<4;a++)
        {
            scanf("%d", &arr[a]);
        }///3 7 9 5
        if(arr[0]>arr[1])
        {
            max1=arr[0];
        }
        else
        {
            max1=arr[1];
        }
        if(arr[2]>arr[3])
        {
            max2=arr[2];
        }
        else
        {
            max2=arr[3];
        }
        int faircnt=0;
        for(int a=0;a<4;a++)
        {
            if(max1<arr[a])
            {
                faircnt++;
            }
            if(max2<arr[a])
            {
                faircnt++;
            }
        }
        if(faircnt>1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}
