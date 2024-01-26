#include<stdio.h>
int main()
{
    int n,p;
    double sum=0;
    scanf("%d", &n);

    for(int a=0;a<n;a++)
    {
        scanf("%d", &p);
        sum=sum+p;
    }
    sum=sum/(double)n;
    printf("%.12f", sum);
    return 0;
}
