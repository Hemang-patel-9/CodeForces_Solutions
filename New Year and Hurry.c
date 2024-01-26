#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d", &n,&k);
    int cnt=0;
    if(n>=1 && k>=1 && k<=240)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+(i*5);
            if(sum<=(240-k))
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}
