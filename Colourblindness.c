#include<stdio.h>
#include<string.h>
int main()
{
    int c;
    scanf("%d", &c);
    for(int b=0;b<c;b++)
    {
        int flag=0;
        int n;
        scanf("%d", &n);
        char s1[101];
        char s2[101];
        scanf("%s", s1);
        scanf("%s", s2);
        for(int a=0;a<strlen(s1);a++)
        {
            if((s1[a]=='B' && s2[a]=='G')||(s1[a]=='G' && s2[a]=='B')||(s1[a]==s2[a]))
            {
                flag=0;
            }
            else
            {
                printf("NO\n");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("YES\n");
        }
    }

    return 0;
}
