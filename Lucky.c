#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int a=0;a<n;a++)
    {
        char s[1010];
        scanf("%s", s);
        if(((int)s[0]+(int)s[1]+(int)s[2])==((int)s[3]+(int)s[4]+(int)s[5]))
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
