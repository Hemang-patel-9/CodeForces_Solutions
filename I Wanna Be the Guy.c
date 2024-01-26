#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int X[n],Y[n],Z[n];

    for(int a=0;a<n;a++)
    {
        Z[a]=a+1;
    }

    for(int a=0;a<n;a++)
    {
        scanf("%d", &X[a]);
        for(int c=0;c<n;c++)
        {
            if(Z[c]==X[a])
            {
                Z[c]=99999999;
            }
        }
    }
    for(int b=0;b<n;b++)
    {
        scanf("%d", &Y[b]);
        for(int c=0;c<n;c++)
        {
            if(Z[c]==Y[b])
            {
                Z[c]=99999999;
            }
        }
    }
    for(int a=0;a<n;a++)
    {
        if(Z[a]!=99999999)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}
