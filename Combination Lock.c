#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int cnt=0;
    scanf("%d", &n);
        char s1[1001];
        char s2[1001];
        scanf("%s", s1);
        scanf("%s", s2);
        for(int a=0;a<n;a++)
        {
            //82195
            //64723
            int n1=s1[a]-'0';
            int n2=s2[a]-'0';
            if(n1>n2)
            {
                if(n1-n2<=5)
                {
                    cnt+=(n1-n2);
                }
                else
                {
                    int p=n1;//8
                    while(p!=n2)//1
                    {
                        cnt++;
                        p++;
                        if(p==10)
                        {
                            p=0;
                        }
                    }
                }
            }
            else if(n1<n2)
            {
                if(n2-n1<=5)
                {
                    cnt+=(n2-n1);
                }
                else
                {
                    int p=n1;
                    while(p!=n2)
                    {
                        cnt++;
                        p--;
                        if(p==-1)
                        {
                            p=9;
                        }
                    }
                }
            }
            else
            {
                cnt+=0;
            }
        }
        printf("%d", cnt);

    return 0;
}
