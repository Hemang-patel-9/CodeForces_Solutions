#include <stdio.h>
int main()
{
    int n, l=1, abc=1;
    scanf("%d", &n);
    int profits[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d", &profits[i]);
        if (i>0)
        {
            if (profits[i]>=profits[i-1])
            {
                l++;
                if (abc<l)
                {
                    abc=l;
                }
            }
            else
            {
                l=1;
            }
        }
    }
    printf("%d\n", abc);
    return 0;
}
