#include<stdio.h>
#include<string.h>
int binarySearch(int array[], int x, int low, int high)
{
    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
int main()
{
    int olegpos=0,gleft=0,gright=0;
    scanf("%d %d %d", &olegpos,&gleft,&gright);

    int n=0;
    scanf("%d", &n);
    int arr[n];
    for(int a=0; a<n; a++)
    {
        scanf("%d", &arr[a]);
    }
    for(int a=0; a<n; a++)
    {
        for(int b=a+1; b<n; b++)
        {
            if(arr[a]>arr[b])
            {
                int tmp=arr[a];
                arr[a]=arr[b];
                arr[b]=tmp;
            }
        }
    }
    int start=0,end=0;
    /**
        3 2 4
        1
        3
    */
    start=binarySearch(arr,gleft,0,n-1);
    for(int a=start;a<n;a++)
    {
        if(arr[a+1]==start)
        {
            start=a;
        }
        else
        {
            break;
        }
    }
    end=binarySearch(arr,gright,0,n-1);
    for(int a=end;a>n;a--)
    {
        if(arr[a-1]==start)
        {
            end=a;
        }
        else
        {
            break;
        }
    }
    if((start==0 && end==0 )|| n==1 || n==2)
    {
        printf("1");
    }
    else
    {
        printf("%d", end-start-1);
    }

    return 0;
}
