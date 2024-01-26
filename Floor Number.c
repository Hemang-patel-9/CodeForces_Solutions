#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int a=0;a<n;a++)
    {
        int n,x;
        scanf("%d %d", &n,&x);
        int cnt=1,ans=2;
        while(ans!=n && ans<n)
        {
            ans+=x;
            cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
