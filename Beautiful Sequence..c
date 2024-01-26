#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int a=0;a<n;a++)
    {
        int testCase=0;
        scanf("%d", &testCase);

        int arr[testCase];
        int flag=0;

        for(int b=0;b<testCase;b++)
        {
            scanf("%d", &arr[b]);
        }
        int max=arr[0];
            if(testCase==1)
            {
                printf("YES");
                flag=1;
                break;
            }
        flag=0;
        for(int b=0;b<testCase;b++)
        {
            if(arr[b]>arr[b+1] && b<testCase-1)
            {
                printf("YES");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("NO");
        }
        printf("\n");

    }

    return 0;
}
