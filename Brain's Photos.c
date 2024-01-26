#include<stdio.h>

int main()
{
    int m,n,i,j,flag=0;
    scanf("%d%d",&m,&n);

    char s[m*n*2];

    for(i=0;i<m*n*2;i++)
    {
        scanf("%c",&s[i]);

        if(s[i]=='C'||s[i]=='M'||s[i]=='Y')
        {
            flag=1;
        }
    }

    if(flag==0)
    {
        printf("#Black&White");
    }
    else
    {
        printf("#Color");
    }

    return 0;
}
