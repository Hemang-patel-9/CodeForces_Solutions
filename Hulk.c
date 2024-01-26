#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int tmp;

    for(int a=3;a<n+3;a++)
    {
        if(a%2==0 && a==n+2)
        {
            printf("I love it");
            return 0;
        }
        if(a%2==1 && a==n+2)
        {
            printf("I hate it");
            return 0;
        }
        if(a%2==0)
        {
            printf("I love that ");
        }
        if(a%2==1)
        {
            printf("I hate that ");
        }
    }

    return 0;
}
