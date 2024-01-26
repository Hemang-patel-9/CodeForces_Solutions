#include<stdio.h>
int main()
{
    int k,r;
    scanf("%d %d", &k,&r);
    int sum=0;
    for (int i=1; ; i++)
    {
        sum = k*i;

        if (sum % 10 == 0 || sum % 10 == r)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}
