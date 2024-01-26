#include<stdio.h>
int main()
{
    int x,ans;
    scanf("%d", &x);
    if(x==0)
    {
        printf("0");
    }
    else if(x%5==0)
    {
        printf("%d", (x/5));
    }
    else
    {
        printf("%d", (x/5)+1);
    }

    return 0;
}
