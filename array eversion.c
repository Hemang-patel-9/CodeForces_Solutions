#include<stdio.h>
int main()
{
    int test=0;
    scanf("%d", &test);

    for(int b=0;b<test;b++)
    {
        int n=0;
        scanf("%d", &n);

        int arr[n];
        for(int a=0;a<n;a++)
        {
            scanf("%d", &arr[a]);
        }
        int count=0;
        int last=arr[n-1];

            for(int a=n-1;a>=0;a--)
            {
                if(last<arr[a])
                {
                    last=arr[a];
                    count++;
                                    }
            }

        printf("%d\n", count);
    }

}
