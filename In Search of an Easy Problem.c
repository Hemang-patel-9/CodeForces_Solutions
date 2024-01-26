#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int flag=0;
    for(int a=0;a<n;a++)
    {
        scanf("%d", &arr[a]);
        if(arr[a]==1)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }

    return 0;
}
