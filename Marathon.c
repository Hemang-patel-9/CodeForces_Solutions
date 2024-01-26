#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int a=0;a<n;a++)
    {
        int b,c,d,e,cnt=0;
        scanf("%d %d %d %d",&b,&c,&d,&e);
        if(c>b)
        {
            cnt++;
        }
        if(d>b)
        {
            cnt++;
        }
        if(e>b)
        {
            cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
