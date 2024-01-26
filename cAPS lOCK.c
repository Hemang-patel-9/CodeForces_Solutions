#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    scanf("%s", s);
    int flag=0;
    for(int a=1;a<strlen(s);a++)
    {
        if(s[a]>=97)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        for(int a=0;a<strlen(s);a++)
        {
            if(s[a]>=97)
            {
                s[a]=s[a]-32;
                printf("%c", s[a]);
            }
            else
            {
                s[a]=s[a]+32;
                printf("%c", s[a]);
            }
        }
    }
    else
    {
        printf("%s", s);
    }

    return 0;
}
