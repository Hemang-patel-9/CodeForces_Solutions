#include<stdio.h>
int main()
{
    long int n=0;
    scanf("%ld", &n);
    int cnt=0;
    int tmp=0;
    tmp=n/100;
    cnt+=tmp;
    n=n-(tmp*100);
    tmp=n/20;
    cnt+=tmp;
    n=n-(tmp*20);
    tmp=n/10;
    cnt+=tmp;
    n=n-(tmp*10);
    tmp=n/5;
    cnt+=tmp;
    n=n-(tmp*5);
    cnt+=n;
    printf("%d", cnt);
}
