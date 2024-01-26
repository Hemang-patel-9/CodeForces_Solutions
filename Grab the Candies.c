#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for(int v=0;v<x;v++)
    {
        int n;
        scanf("%d", &n);
        int mihai=0;
        int bianca=0;
        for(int a=0;a<n;a++)
        {
            int b;
            scanf("%d", &b);
            if(b%2==0)
            {
                mihai+=b;
            }
            else
            {
                bianca+=b;
            }
        }
        if(mihai>bianca)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
