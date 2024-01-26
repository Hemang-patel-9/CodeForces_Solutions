#include<stdio.h>
#include<string.h>
int main()
{
    int n,anton=0,dainik=0;
    scanf("%d", &n);

    char s[n];

    scanf("%s", s);;

    for(int a=0;a<strlen(s);a++)
    {
        if(s[a]=='A')
        {
            anton++;
        }
        else
        {
            dainik++;
        }
    }
    if(anton>dainik)
    {
        printf("Anton");
    }
    else if(anton<dainik)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }

    return 0;
}
