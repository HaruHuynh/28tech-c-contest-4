// Cho một số nguyên không âm N, hãy in ra chữ số đầu tiên của N.
#include <stdio.h>
#define ll long long 

int firstDigit(ll n){
    if(n < 10)
        return n;
    else 
        return firstDigit(n / 10);
}

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%d", firstDigit(n));
    return 0;
}
