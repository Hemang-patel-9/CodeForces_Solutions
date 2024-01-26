#include<stdio.h>
#include<string.h>
int main()
{
    int s,n;
    scanf("%d %d",&s,&n);
    int damage[n],heal[n];
    int flag=0;
    for(int a=0; a<n; a++)
    {
        scanf("%d %d", &damage[a],&heal[a]);
    }
    for(int a=0;a<n;a++)
    {
        for(int b=a+1;b<n;b++)
        {
            if(damage[a]>damage[b])
            {
                int tmp1=damage[a];
                damage[a]=damage[b];
                damage[b]=tmp1;
                int tmp2=heal[a];
                heal[a]=heal[b];
                heal[b]=tmp2;
            }
        }
    }
    for(int a=0; a<n; a++)
    {
        if(s>damage[a])
        {
            s+=heal[a];
        }
        else
        {
            printf("NO");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("YES");
    }

    return 0;
}
