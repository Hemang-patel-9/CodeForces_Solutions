#include<stdio.h>
int main()
{
    long int n;
    long long int cnt=0;
    scanf("%ld", &n);
    for(int a=0;a<n;a++)
    {
        char s[20];
        scanf("%s", &s);
        if(strcmp(s,"Icosahedron")==0)
        {
            cnt+=20;
        }
        else if(strcmp(s,"Tetrahedron")==0)
        {
            cnt+=4;
        }
        else if(strcmp(s,"Cube")==0)
        {
            cnt+=6;
        }
        else if(strcmp(s,"Octahedron")==0)
        {
            cnt+=8;
        }
        else if(strcmp(s,"Dodecahedron")==0)
        {
            cnt+=12;
        }
        else
        {
            printf("ERROR!");
            return 0;
        }
    }
    printf("%lld", cnt);

    return 0;
}
