#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];
    for(int a=0;a<n;a++)
    {
        scanf("%d", &arr[a]);
    }
    int ans[n],tmp1=0,tmp2=0,flag=0;
    for(int a=0;a<n;a++)
    {
        while(1)
        {
                tmp1=(arr[a]+tmp1)/10;
                if(tmp1==tmp2)
                {
                    if(flag==5)
                    {
                        ans[a]=arr[a]+tmp1;
                        break;
                    }
                    flag++;
                }
                else
                {
                    tmp2=tmp1;
                }
        }
    }
    for(int a=0;a<n;a++)
    {
        printf("%d\n", ans[a]);
    }
    return 0;
}
