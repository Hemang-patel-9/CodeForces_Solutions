#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int h=0,e=0,l1=0,l2=0,o=0;
    for(int a=0;a<strlen(s);a++)
    {
        if(s[a]=='h')
        {
            h+=a;
            break;
        }
    }
    for(int a=h;a<strlen(s);a++)
    {
        if(s[a]=='e')
        {
            e+=a;
            break;
        }
    }
    for(int a=e;a<strlen(s);a++)
    {
        //ahhellllloou
        if(s[a]=='l')
        {
            l1+=a;
            break;
        }
    }
    for(int a=l1+1;a<strlen(s);a++)
    {
        if(s[a]=='l')
        {
            l2+=a;
            break;
        }
    }
    for(int a=l2;a<strlen(s);a++)
    {
        if(s[a]=='o')
        {
            o+=a;
            break;
        }
    }
    if(h<e && e<l1 &&l1<l2 &&l2<o)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
