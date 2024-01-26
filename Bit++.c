    #include<stdio.h>
#include<string.h>

int main()
{
    char s[4];
    char s1[]="++X";
    char s2[]="X++";
    char s3[]="--X";
    char s4[]="X--";
    int cnt=0,n;

    scanf("%d", &n);

    for(int a=0;a<n;a++)
    {
       scanf(" %s", s);

       if(strcmp(s,s1)==0)
       {
           cnt++;
       }
       else if(strcmp(s,s2)==0)
       {
           cnt++;
       }
       else if(strcmp(s,s3)==0)
       {
           cnt--;
       }
       else
       {
           cnt--;
       }
    }
    printf("%d", cnt);

    return 0;
}
