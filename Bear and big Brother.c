#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,cnt=0,n;
    scanf("%d %d", &a, &b);
    if(a<=b)
    {
        while(1)
        {
            a=a*3;
            b=b*2;
            cnt++;
            if(a>b)
            {
                break;
            }
        }
    }
    printf("%d", cnt);

    return 0;
}
