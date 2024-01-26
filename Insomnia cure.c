#include<stdio.h>
int main()
{
    int k,l,m,n,d;
    int cnt=0;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
    for(int a=1;a<=d;a++)
    {
        if(a%k==0 || a%l==0 || a%m==0 || a%n==0)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
