/**#include<stdio.h>
#include<string.h>
int main()
{
    long int x;
    scanf("%ld", &x);
    for(int v=0; v<x; v++)
    {
        long int n;
        scanf("%ld", &n);
        char s[n+1];
        scanf("%s", s);
        strupr(s);
        for(int a=0; a<strlen(s); a++)
        {
            while(s[a]==s[a+1])
            {
                s[a]='0';
            }
        }
        printf("---%s\n", s);

        int flag=0;
        ///manual coding
        for(int a=0; a<strlen(s); a++)
        {
            flag=0;
            for(int b=a+1; b<strlen(s);b++)
            {
                if(s[a]!='0' && (s[a]==s[b]))
                {
                    printf("NO\n");
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("YES\n");
                break;
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char str[100];
        getchar();
        fgets(str, sizeof(str), stdin);
        int mp[128] = {0};
        int found = 0;
        for (int i = 0; i < n; ++i) {
            if (i != 0) {
                if (str[i] != str[i - 1] && mp[str[i]] > 0) {
                    found = 1;
                    printf("NO\n");
                    break;
                }
            }
            mp[str[i]]++;
        }
        if (!found) {
            printf("YES\n");
        }
    }
    return 0;
}
