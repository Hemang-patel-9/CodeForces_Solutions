#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d %d", &n, &a);
    int minimumA = a, maximumA = a, minimumI = 0, maximumI = 0;
    for (int i = 1; i < n; ++i)
    {
        scanf("%d", &a);
        if (a > maximumA)
        {
            maximumA = a;
            maximumI = i;
        }
        if (a <= minimumA)
        {
            minimumA = a;
            minimumI = i;
        }
    }
    printf("%d\n", maximumI + (n - 1 - minimumI) - (minimumI < maximumI ? 1 : 0));
    return 0;
}
