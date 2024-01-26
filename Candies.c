#include <stdio.h>
typedef long long ll;

int main(){
    long long t;
    scanf("%lld", &t);

    while(t--){
        long long n;
        scanf("%lld", &n);

        long long m = 1;

        for(long long p = 1; p < 50; p++){
            m = 2 * m + 1;

            if(n % m){
                continue;
            }

            printf("%lld\n", n / m);
            break;
        }
    }

    return 0;
}

