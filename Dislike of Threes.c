#include<stdio.h>
int main()
{
    int k;
    scanf("%d", &k);
    for(int a=0;a<k;a++)
    {
        int n;
        scanf("%d", &n);
        if(n%3==0 || n%10==3)
        {
            n++;
        }
        else
        {
            printf("%d", n);
        }
    }

    return 0;
}
