#include<stdio.h>
#include<string.h>
int main()
{
    int p=0;
    scanf("%d", &p);
    for(int z=0;z<p;z++)
    {

        int n;
        scanf("%d", &n);
        int arr[n];
        for(int a=0;a<n;a++)
        {
            scanf("%d", &arr[a]);
        }
        int max=0;
        int cnt=0;
        for(int a=0;a<n;a++)
        {
            if(arr[a]==0)
            {
                cnt++;
                if(max<cnt)
                {
                    max=cnt;
                }
            }
            else
            {
                cnt=0;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
