#include<stdio.h>

#include<string.h>

void stringLwr(char *s) /*For converting all string into lowercase*/

{
    int i=0;

    while(s[i]!='\0')

    {

        if(s[i]>='A' && s[i]<='Z')

        {

            s[i]=s[i]+32;

        }

        ++i;

    }

}

int main()

{

    char line[1000000],l[]= {'a','b','c','d','e','f','g','h',

                             'i','j','h','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'
                            };

    int i, j,n,flag=0,f=0,LengthOfString;

    scanf("%d", &LengthOfString);

    scanf(" %s", line);
     /* To get strings with spaces inbetween*/

    n=strlen(line); //length of string

    stringLwr(line); /*converting all strings to lower case just for convenience*/

    for(i=0; i<n; i++)

    {

        if((line[i] >= 'a' && line[i] <= 'z')||(line[i]== ' '))

        {

            for(j=0; j<26; j++)

            {

                if(l[j]==line[i]) /*marking the matching alphabets with some special character just to indicate that ur string has characters from a-z*/

                {

                    l[j]='$';

                }

            }

        }

        else

        {

            flag=1; /* just as an indicator for invalid input ie.other than alphabets in the given string*/

        }

    }

    for(i=0; i<26; i++)

    {

        if(l[i]!='$')

            f=1; /* to indicate there are some missing alphabets in ur given string*/

    }

    if(flag==1) /* only when ur string contains other character than alphabets*/

        printf("Invalid input");

    else

        if(f==1) /* this indicates ur string miss some alphabets from a-z irrespective of upper or lower case*/

            printf("NO");

        else

            /*Pangram means the given string contains all alphabet atleast once irrespective of cases*/

            printf("YES");

    return 0;

}
