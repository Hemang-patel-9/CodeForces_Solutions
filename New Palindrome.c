#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int a=0; a<n; a++)
    {
        int cnt=0;
        char s[52];
        scanf("%s", s);

        if(strlen(s)%2==0)
        {
            for(int b=0; b<strlen(s)/2; b++)
            {
                if(s[b]!=s[b+1])
                {
                    cnt++;
                }
            }
            if(cnt>2)
            {
                printf("YES\n");
                break;
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
        else
        {
            for(int b=0; b<(strlen(s)-1)/2; b++)
            {
                if(s[b]!=s[b+1])
                {
                    cnt++;
                }
            }
            if(cnt>2)
            {
                printf("YES\n");
                break;
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
    }

    return 0;
}
