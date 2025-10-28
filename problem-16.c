// Cho một số nguyên không âm N, hãy in ra chữ số lớn nhất và chữ số nhỏ nhất của N.
// Gợi ý : Các bạn viết 2 hàm tìm chữ số nhỏ nhất và lớn nhất.

#include <stdio.h>
#define ll long long 

int maxDigit(ll n){
    if(n < 10) return n;
    int d = n % 10;
    int m = maxDigit(n / 10);
    return d > m ? d : m;
}

int minDigit(ll n){
    if(n < 10) return n;
    int d = n % 10;
    int m = minDigit(n / 10);
    return d < m ? d : m;
}

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%d %d", maxDigit(n), minDigit(n));
    return 0;
}
