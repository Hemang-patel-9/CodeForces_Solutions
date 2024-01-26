#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int a=0;a<t;a++)
    {
        int odd=0,even=0;
        int n;
        scanf("%d", &n);
        int arr[2*n];
        for(int b=0;b<2*n;b++)
        {
            scanf("%d", &arr[b]);
            if(arr[b]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==even)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
