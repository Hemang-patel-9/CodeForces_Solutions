#include<stdio.h>
#include<string.h>
int main()
{
    int n,year;
    scanf("%d", &n);

    year=n;
    int tmp=0,arr[4],truevalue=0,flag=0,sss=0,count=1;
    while(1)
    {
        n=year+count;
        ///1988
        printf("%d\n", n);
        for(int a=3;a>=0;a--)
        {
            tmp=n%10;
            arr[a]=tmp;
            n=n/10;
        }
        ///1  9  8  8
        for(int a=0;a<4;a++)
        {
            printf("%d\t", arr[a]);
        }
        printf("\n");
        for(int a=0;a<4;a++)
        {
            for(int b=a+1;b<4;b++)
            {
                if(arr[a]==arr[b])
                {
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                    printf("\tgvb\t\t");
                }
            }
            if(flag==1)
            {
                sss=1;
                break;
            }
            else
            {
                count++;
            }
        }
        if(sss=1)
        {
            truevalue=year+count;
            break;
        }
    }
    printf("%d", truevalue);
    return 0;
}
