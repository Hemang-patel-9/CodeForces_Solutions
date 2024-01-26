#include<stdio.h>
#include<string.h>
int main()
{
    int n,flag=0;
    scanf("%d", &n);
    for(int a=0; a<n; a++)
    {
        char c[2];
        scanf("%s", c);
        if(c[0]=='c' ||c[0]=='o' ||c[0]=='d' ||c[0]=='e' ||c[0]=='f' ||c[0]=='o' ||c[0]=='r' ||c[0]=='c' ||c[0]=='e' ||c[0]=='s')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
