#include<stdio.h>
int main()
{
    int n,c,b,cnt=0,flag=0;

    scanf("%d", &n);

    for(int a=0;a<n;a++)
    {
        flag=0;
        scanf("%d %d", &c,&b);
        if(c!=b)
        {
            cnt++;
            flag=1;
        }
        if(flag==1)
        {
            if(c==b+1 || c==b-1)
            {
                cnt--;
            }
        }
    }
    printf("%d", cnt);

    return 0;
}
