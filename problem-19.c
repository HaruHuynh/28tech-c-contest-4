// Cho số nguyên không âm N, hãy kiểm tra xem tất cả các chữ số của N có phải đều là số chẵn hay không?
#include <stdio.h>
#define ll long long

ll checkEven(ll n){
    if(n == 0) return 1;
    int d = n % 10;
    if(d % 2 == 0)
        return checkEven(n / 10);
    else
        return 0;
}

int main() {
    ll n;
    scanf("%lld", &n);
    if(checkEven(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}