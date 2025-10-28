// Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.
#include <stdio.h>
#define ll long long 

ll sumDigit(ll n){
    if (n < 10)
        return n;
    else 
        return n % 10 + sumDigit(n / 10);
}

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%lld", sumDigit(n));
    return 0;
}