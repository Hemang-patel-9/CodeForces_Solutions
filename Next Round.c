#include<stdio.h>
int main()
{
    int n,k,cnt=0,same=0,kon=0,p;
    scanf("%d %d", &n, &k);

    int arr[50],a,b,tmp;

    for(a=0;a<n;a++)
    {
        scanf(" %d", &arr[a]);
    }
    for(a=0;a<n;a++)
    {
        for(b=a+1;b<n;b++)
        {
            if(arr[a]<arr[b])
            {
                tmp=arr[a];
                arr[a]=arr[b];
                arr[b]=tmp;
            }
        }
    }
    for(a=0;a<n;a++)
    {
        if(k<arr[a])
        {
            cnt++;
        }
        if(k==arr[a])
        {
            same++;
        }
        //7 4
        //2 3 2 1 2 3 1
    }
    if(cnt!=0)
    {
        printf("%d", cnt);
    }
    if(cnt==0 && same!=0)
    {
        printf("%d", same);
    }
    if(cnt==0 && same==0)
    {
        for(a=0;a<n;a++)
        {
            if(arr[a]<k)
            {
                p=arr[a];
                if(p==0)
                {
                    printf("0");
                    return 0;
                }
                break;
            }
        }
        for(a=0;a<n;a++)
        {
            if(arr[a]==p)
            {
                kon++;
            }
        }
        printf("%d", kon);
    }
    return 0;
}
