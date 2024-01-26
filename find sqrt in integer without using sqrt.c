#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int mySqrt(int);
int main()
{
    int x,ans;
    printf("\nEnter the value of x:\t");
    scanf("%d", &x);
    ans=mySqrt(x);
    printf("%d", ans);

    return 0;
}
int mySqrt(int x){//x=7
    long int square = 0;
    int i=1, sqrt=0;
    while(1){
        if(square >= x){
            break;
        }
        square = i * i;//
        if(square > x){
            sqrt = i - 1;
        }
        else if(square == x){
            sqrt = i;
        }
        i++;
    }
    return sqrt;
}
