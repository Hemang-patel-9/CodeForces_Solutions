#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int a=0;a<n;a++)
    {
        int h,m;
        scanf("%d %d",&h,&m);
        int rh=23-h;
        int rm=60-m;
        printf("%d\n", (rh*60)+rm);
    }

    return 0;
}
