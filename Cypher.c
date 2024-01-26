#include<stdio.h>
#include<string.h>
int main()
{
    int p;
    scanf("%d", &p);

    for(int c=0; c<p; c++)
    {
        int q;
        scanf("%d", &q);
        int arr[q];
        for(int a=0; a<q; a++)
        {
            scanf("%d", &arr[a]);
        }
        for(int b=0; b<q; b++)
        {
            int n;
            scanf("%d", &n);
            char str[n];
            scanf("%s", str);

            for(int a=0; a<strlen(str); a++)
            {
                if(str[a]==85)
                {
                    arr[b]--;
                    if(arr[b]==-1)
                    {
                        arr[b]=9;
                    }
                }
                else if(str[a]==68)
                {
                    arr[b]++;
                    if(arr[b]==10)
                    {
                        arr[b]=0;
                    }
                }
                else
                {
                    printf("Error!");
                    return 0;
                }
            }
        }
        for(int a=0; a<q; a++)
        {
            printf("%d ", arr[a]);
        }
        printf("\n");
    }
    return 0;
}
