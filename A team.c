#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,sum=0;
    scanf("%d", &n);

    int arr[n][3],a,b;

    for(a=0;a<n;a++)
    {
        for(b=0;b<3;b++)
        {
            scanf("%d ", &arr[a][b]);
        }
    }
    for(a=0;a<=n;a++)
    {
        if(arr[a][1]==1&&arr[a][2]==1)
        {
            sum=sum+1;
        }
        else if(arr[a][1]==1&&arr[a][3]==1)
        {
            sum=sum+1;
        }
        else if(arr[a][2]==1&&arr[a][3]==1)
        {
            sum=sum+1;
        }
        else
        {
            sum=sum+0;
        }
    }
    printf("%d", sum);
    return 0;
}
