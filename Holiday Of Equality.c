#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ip[n];

    for(int a=0;a<n;a++)
    {
        scanf("%d", &ip[a]);
    }

    int max=ip[0];
    for(int a=0;a<n;a++)
    {
        if(ip[a]>max)
        {
            max=ip[a];
        }
    }
    int cnt=0;
    for(int a=0;a<n;a++)
    {
        cnt=cnt+(max-ip[a]);
    }

    printf("%d", cnt);
    return 0;
}
