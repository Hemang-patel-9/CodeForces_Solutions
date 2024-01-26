#include <stdio.h>
int main()
{
    float x[] = {1939, 1949, 1959, 1969, 1979, 1989}, y[] = {12, 15, 20, 27, 39, 52};
    int n = 6;
    float need = 1974;
    float val[n][n];
    float x0 = 0, flag = 0;
    float p;
    float h = x[1] - x[0];
    float w[n];
    int save = 0;
    float ans[n];
    float Finale_Ans = 0;

    for (int a = 0; a < n; a++)
    {
        if (x[a] > need)
        {
            save = a;
            x0 = x[a];
            break;
        }
    }
    p = (need - x0) / h;
    // main way
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            val[a][b] = 0;
        }
    }
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < a + 1; b++)
        {
            int flag = 1;
            if (b == 0)
            {
                val[a][b] = y[a];
                flag = 0;
            }
            if (flag != 0)
            {
                val[a][b] = val[a][b - 1] - val[a - 1][b - 1];
            }
        }
    }
    int cnt = 0;
    for (int a = 0; a < n; a++)
    {
        if (cnt == 1 || cnt == 0)
        {
            w[a] = val[save][a];
            cnt++;
        }
        if (cnt == 2)
        {
            save++;
            cnt = 0;
        }
    }
    int count = 1;
    for (int a = 0; a < n; a++)
    {
        flag = 0;
        if (a == 0 && w[a] != 0)
        {
            ans[a] = w[a];
        }
        else if (a == 1 && w[a] != 0)
        {
            ans[a] = p * w[a];
        }
        else if (a % 2 == 0 && w[a] != 0)
        {
            ans[a] = ((p + count) * ans[a - 1] * w[a]) / (a * w[a - 1]);
        }
        else if (a % 2 == 1 && w[a] != 0)
        {
            ans[a] = (ans[a - 1] * (p - count) * w[a]) / (a * w[a - 1]);
            flag = 1;
        }
        else
        {
            ans[a] = 0;
        }
        if (flag == 1)
        {
            count++;
        }
    }
    for (int a = 0; a < n; a++)
    {
        Finale_Ans = Finale_Ans + ans[a];
    }
    printf("The Finale Answer is %.4f", Finale_Ans);
    return 0;
}
