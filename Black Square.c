#include<stdio.h>
#include<string.h>
int main()
{
    int arr[4];
    char s[100000];
    for(int a=0; a<4; a++)
    {
        scanf("%d", &arr[a]);
    }
    scanf("%s", s);
    int cnt=0;
    for(int a=0; a<strlen(s); a++)

        ///printf("%c-- ", s[a]);
        if(s[a]=='1')
        {
            cnt=cnt+arr[0];
        }
        else if(s[a]=='2')
        {
            cnt=cnt+arr[1];
        }
        else if(s[a]=='3')
        {
            cnt=cnt+arr[2];
        }
        else if(s[a]=='4')
        {
            cnt=cnt+arr[3];
        }
        else
        {
            printf("ERROR!");
            return 0;
        }
    printf("%d", cnt);
    return 0;
}
