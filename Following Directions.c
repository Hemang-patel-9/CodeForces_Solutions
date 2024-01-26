#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    int flag=0;
    scanf("%d", &x);
    for(int p=0;p<x;p++)
    {
        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        int arr[]={0,0};
        for(int a=0;a<n;a++)
        {
            if(str[a]=='U')
            {
                arr[0]=arr[0]+1;
            }
            else if(str[a]=='D')
            {
                arr[0]=arr[0]-1;
            }
            else if(str[a]=='R')
            {
                arr[1]=arr[1]+1;
            }
            else if(str[a]=='L')
            {
                arr[1]=arr[1]-1;
            }
            else
            {
                printf("ERROR!");
                return 0;
            }
            if(arr[0]==1 && arr[1]==1)
            {
                printf("YES\n");
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            printf("NO\n");
        }
    }

    return 0;
}
