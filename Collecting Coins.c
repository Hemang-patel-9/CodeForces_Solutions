#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int a=0;a<n;a++)
    {
        int a,b,c,n;
        scanf("%d %d %d %d", &a,&b,&c,&n);

        int max=0,cnt=0;
        if(a>=b && a>=c)
        {
            max=a;
            cnt=(max-b)+(max-c);
        }
        else if(b>=a&&b>=c)
        {
            max=b;
            cnt=(max-a)+(max-c);
        }
        else
        {
            max=c;
            cnt=(max-b)+(max-a);
        }
        if(cnt>n)
        {
            goto lb;
        }
        n-=cnt;
        if(n%3==0)
        {
            printf("YES\n");
        }
        else
        {
            lb:
            printf("NO\n");
        }
    }

    return 0;
}
