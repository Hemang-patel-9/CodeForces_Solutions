#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int a=0;a<n;a++)
    {
        char s[4];
        scanf("%s", s);
        int a=(int)s[0];
        int b=(int)s[2];
        printf("%d\n", (a-48)+(b-48));
    }

    return 0;
}