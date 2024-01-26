#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);
    int count=0;
    int index=0;
    char str[n];
    char demo[n];
    scanf(" %s", str);

    for(int a=0;a<n;a++)
    {
        strcpy(demo,str);
            if(demo[a]=='O')
            {
                index=a;
                for(int a=0;a<m;a++)
                {
                    demo[a]='A';
                }
            }
            printf("%c", demo[a]);
    }
    return 0;
}
