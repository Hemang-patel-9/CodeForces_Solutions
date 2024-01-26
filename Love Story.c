#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char q[]="codeforces";
    for(int a=0;a<n;a++)
    {
        int cnt=0;
        char s[1000];
        scanf("%s", s);
        for(int b=0;b<10;b++)
        {
            if(s[b]!=q[b])
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}
