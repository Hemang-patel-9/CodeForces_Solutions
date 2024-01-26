#include<stdio.h>
int main()
{
    int n;
    int sum1=0,sum2=0;

    scanf("%d", &n);

    int ip[n][2];
    for(int a=0;a<n;a++)
    {
        int p,q;
        scanf("%d %d", &p ,&q);
        if(p>q)
        {
            sum1++;
        }
        else if(p<q)
        {
            sum2++;
        }
        else
        {
            sum1++;
            sum2++;
        }
    }
    if(sum1>sum2)
    {
        printf("Mishka");
    }
    else if(sum1<sum2)
    {
        printf("Chris");
    }
    else
    {
        printf("Friendship is magic!^^");
    }

    return 0;
}
