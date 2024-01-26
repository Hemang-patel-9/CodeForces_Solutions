#include<stdio.h>
#include<string.h>
int main()
{
    int y,w;
    scanf("%d %d", &y,&w);

    if(y<w)
    {
        int c=(6-w)+1;
        if(c==1)
        {
            printf("1/6");
        }
        else if(c==2)
        {
            printf("1/3");
        }
        else if(c==3)
        {
            printf("1/2");
        }
        else if(c==4)
        {
            printf("2/3");
        }
        else if(c==5)
        {
            printf("5/6");
        }
        else if(c==6)
        {
            printf("1/1");
        }
        else
        {
            printf("ERROR!");
            return 0;
        }
    }
    else if(y>=w)
    {
        int c=(6-y)+1;
        if(c==1)
        {
            printf("1/6");
        }
        else if(c==2)
        {
            printf("1/3");
        }
        else if(c==3)
        {
            printf("1/2");
        }
        else if(c==4)
        {
            printf("2/3");
        }
        else if(c==5)
        {
            printf("5/6");
        }
        else if(c==6)
        {
            printf("1/1");
        }
        else
        {
            printf("ERROR!");
            return 0;
        }
    }
    else
    {
        printf("Error!");
        return 0;
    }

    return 0;
}
