#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ft=0,st=1,tt=0,cnt=0;
    int cntft=0,cntst=0,cnttt=0;
    while(tt!=n && tt<=n)
    {
        tt=ft+st;
        cntft=(st-ft);
        cntst=ft-cntft;
        ft=st;
        st=tt;
    }
    if(tt==n)
    {
        if(n==0)
        {
            printf("0 0 0");
        }
        else if(n==1)
        {
            printf("0 0 1");
        }
        else if(n==2)
        {
            printf("1 1 0");
        }
        else
        {
            printf("%d %d %d", cntst,cntft,ft);
        }
    }
    else
    {
        printf("I'm too stupid to solve this problem");
    }

    return 0;
}
