#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int cnt=0;
    int flag=0;
    ///1 2 3 4 5 6 7 8
    for(int a=0; a<strlen(s)-3; a++)
    {
        if(s[a]=='x' &&s[a+1]=='x' &&s[a+2]=='x')
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cnt=0;
        int a=0;

        for(int a=0; a<strlen(s)-2;)
        {
            if(s[a]=='x' &&s[a+1]=='x' &&s[a+2]=='x')
            {
                cnt++;
                printf("\nTRUE %d %s\n",a,s);
            }
            else
            {
                a++;
            }
        }
        printf("cnt =%d", cnt);
    }
    else
    {
        printf("0");
    }

    return 0;
}
