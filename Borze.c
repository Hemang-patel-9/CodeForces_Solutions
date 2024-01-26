#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    scanf("%s", s);

    for(int a=0;a<strlen(s);a++)
    {
        if(s[a]=='-' && s[a+1]=='-')
        {
            printf("2");
            a=a+1;
        }
        else if(s[a]=='-' && s[a+1]=='.')
        {
            printf("1");
            a=a+1;
        }
        else if(s[a]=='.')
        {
            printf("0");
        }

    }

    return 0;
}
