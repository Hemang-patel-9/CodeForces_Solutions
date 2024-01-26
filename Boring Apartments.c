#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    scanf("%d", &x);
    for(int a=0; a<x; a++)
    {
        int n=0;
        scanf("%d", &n);
        int p=n;
        int cnt=0;
        while(n!=0)
        {
            int tmp=n%10;
            cnt++;
            n/=10;
        }
        int arr[cnt];
        for(int a=0;a<cnt;a++)
        {
            int tmp=p%10;
            arr[a]=tmp;
            p/=10;
        }
        int flag=0;
        for(int a=0;a<cnt-1;a++)
        {
            if(arr[a]!=arr[a+1])
            {
                flag=1;
                break;
            }
        }
        int ans=0;
        if(flag==0)
        {
            int reg=arr[0];
            ans=ans+(10*(reg-1));
            if(cnt==1)
            {
                ans=ans+1;
            }
            else if(cnt==2)
            {
                ans=ans+3;
            }
            else if(cnt==3)
            {
                ans=ans+6;
            }
            else if(cnt==4)
            {
                ans=ans+10;
            }
            else
            {
                printf("ERROR!");
                break;
            }
            printf("%d\n", ans);
        }
    }

    return 0;
}
