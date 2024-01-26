#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n],b[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }

    int tmp1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            printf("%d\t", b[i]-a[i]);
        }
        else
        {
            tmp1=0;
            while(a[i]%b[i]!=0)
            {
                a[i]++;
                tmp1++;
            }
            printf("%d\t", tmp1);
        }
    }

    return 0;
}
