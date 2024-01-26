#include<stdio.h>
int main()
{
    int n1=0,n2=0;
    int cnt=0;
    scanf("%d %d", &n1,&n2);
    int ans=0;
    while(ans<=n1)
    {
        ans+=n2;
        cnt++;
    }
    printf("The quotient is %d\n", cnt-1);
    printf("The reminder is %d", (n1-(n2*(cnt-1))));

    return 0;
}
