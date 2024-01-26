#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    scanf(" %s", str);
    strupr(str);
    int flag=0;
    for(int a=0;a<strlen(str);a++)
    {
        if(str[a]=='W' && str[a+1]=='U' && str[a+2]=='B')
        {
            if(flag==1)
            {
                printf(" ");
            }
            a=a+2;
        }
        else
        {
            printf("%c", str[a]);
            flag=1;
        }
    }
    return 0;
}
