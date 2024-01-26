#include <stdio.h>

int main()
{

    // Get the two Strings to be concatenated
    char str1[101], str2[101];

    // Declare a new Strings
    // to store the concatenated String
    char str3[101];
    char ans[101];
    gets(str1);
    gets(str2);
    gets(ans);

    int i = 0, j = 0;
    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';

    char tmp;
    for(int a=0;a<strlen(str3);a++)
    {
        for(int b=0;b<strlen(str3);b++)
        {
            if(str3[a]<str3[b])
            {
                tmp=str3[a];
                str3[a]=str3[b];
                str3[b]=tmp;
            }
        }
    }
    for(int a=0;a<strlen(ans);a++)
    {
        for(int b=0;b<strlen(ans);b++)
        {
            if(ans[a]<ans[b])
            {
                tmp=ans[a];
                ans[a]=ans[b];
                ans[b]=tmp;
            }
        }
    }
    if(strcmp(ans,str3)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
