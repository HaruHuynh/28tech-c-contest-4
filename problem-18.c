// Cho số nguyên không âm N, hãy tính tổng các chữ số chẵn, tổng các chữ số lẻ của N.
// Bạn sẽ viết 2 hàm, 1 hàm tính tổng chẵn, 1 hàm tính tổng lẻ.
#include <stdio.h>
#define ll long long

ll sumEven(ll n){
    if (n == 0) return 0;

    int d = n % 10;
    if(d % 2 == 0)
        return d + sumEven(n / 10);
    else 
        return sumEven(n / 10);
}

ll sumOdd(ll n){
    if(n == 0) return 0;

    int d = n % 10;
    if(d % 2 != 0)
        return d + sumOdd(n / 10);
    else
        return sumOdd(n / 10);
}

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%lld\n", sumEven(n));
    printf("%lld", sumOdd(n));
    return 0;
}