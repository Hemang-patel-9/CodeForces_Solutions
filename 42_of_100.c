#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of n:\t");
    scanf("%d", &n);
    int arr[n];
    for(int a=0;a<n;a++)
    {
        printf("\nEnter the arr[%d]:\t", a+1);
        scanf("%d", &arr[a]);
    }
    int k=0;
    printf("Enter the K:\t");
    scanf("%d", &k);

    for(int a=0;a<n-k+1;a++)
    {
        int p=0;
        int max=arr[a],currmax=0;

        for(int b=a;b<a+k;b++)
        {
            currmax=arr[b];
            if(currmax>max)
            {
                max=currmax;
            }
            //test[p]=arr[b];
            //p++;
        }
        printf("%d ", max);
    }

    return 0;
}
