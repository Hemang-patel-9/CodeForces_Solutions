#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

void solve(){
    ll n, i; scanf("%lld", &n);
    ll p = n;
    ll* s = (ll*)malloc(n * sizeof(ll));
    ll s_size = 0;
    while(n--){
        ll x; scanf("%lld", &x);
        int found = 0;
        for(int i = 0; i < s_size; i++){
            if(s[i] == x){
                found = 1;
                break;
            }
        }
        if(!found){
            s[s_size] = x;
            s_size++;
        }
    }
    ll x = p - s_size;
    if(x&1) printf("%lld\n", s_size - 1);
    else printf("%lld\n", s_size);
    free(s);
}

int main()
{
    int t; scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}
