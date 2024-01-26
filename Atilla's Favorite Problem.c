#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    scanf("%d", &x);
    for(int v=0;v<x;v++)
    {
        int n;
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        strupr(s);
        int max=s[0]-64;
        for(int a=0;a<strlen(s);a++)
        {
            if(max<(s[a]-64))
            {
                max=s[a]-64;
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
