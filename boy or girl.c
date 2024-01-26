#include<stdio.h>
#include<string.h>
int main()
{
    int cnt=0;
    char s[100];

    scanf(" %s", s);

    int a;

    for(a=0;a<strlen(s);a++)
    {
        for(int b=a+1;b<strlen(s);b++)
        {
            if(s[a]==s[b])
            {
                s[b]='0';
            }
        }
    }
    for(a=0;a<strlen(s);a++)
    {
        if(s[a]!='0')
        {
            cnt++;
        }
        else
        {
            printf("");
        }
    }
    if(cnt%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}
