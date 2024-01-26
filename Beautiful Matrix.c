#include<stdio.h>
#include<math.h>
int main()
{
    int matrix[5][5],a,b,sum=0;

    for(a=0;a<5;a++)
    {
        for(b=0;b<5;b++)
        {
            scanf(" %d", &matrix[a][b]);
        }
    }
    for(a=0;a<5;a++)
    {
        for(b=0;b<5;b++)
        {
            if(matrix[a][b]==1)
            {
                sum=sum+abs(a-2)+abs(b-2);
            }
        }
    }
    printf("%d", sum);

    return 0;
}
