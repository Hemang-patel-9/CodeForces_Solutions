#include<stdio.h>
#include<string.h>
int main()
{
    long long int n;

    scanf("%lld", &n);

    int cnt=0,count=0,tmp;

    while(n!=0)
    {
        tmp=n%10;
        if(tmp==4 || tmp==7)
        {
            count++;
        }
        n=n/10;
    }
    if(count==4 || count==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
