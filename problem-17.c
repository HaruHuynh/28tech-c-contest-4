// Cho một số nguyên không âm N, hãy in ra N theo thứ tự các chữ số từ trái qua phải và từ phải qua trái. Chú ý phải sử dụng hàm đệ quy cho cả 2 yêu cầu.
#include <stdio.h>
#define ll long long 

void leftRight(ll n){
    if(n < 10){
        printf("%lld ", n);
        return;
    }
    leftRight(n / 10);
    printf("%lld ", n % 10);
}

void rightLeft(ll n){
    if(n < 10){
        printf("%lld ", n);
        return;
    }
    printf("%lld ", n % 10);
    rightLeft(n / 10);
}

int main() {
    ll n;
    scanf("%lld", &n);
    leftRight(n);
    printf("\n");
    rightLeft(n);
    return 0;
}