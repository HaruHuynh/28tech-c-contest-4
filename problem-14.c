// Cho một số nguyên không âm N, hãy đếm số lượng chữ số của N.
#include <stdio.h>
#define ll long long 
ll countDigits(ll n){
    if(n < 10) 
        return 1;
    else
        return 1 + countDigits(n / 10);
}

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%lld", countDigits(n));
    return 0;
}
