#include<stdio.h>
#include<string.h>
int main()
{
    int m;
    scanf("%d", &m);
    for(int p=0;p<m;p++)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int tmp=0;
        for(int a=0;a<strlen(s);a++)
        {
            if(a==tmp)
            {
                for(int b=a+1;b<strlen(s);b++)
                {
                    if(s[a]==s[b])
                    {
                        printf("%c", s[a]);
                        tmp=b+1;
                        break;
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}
