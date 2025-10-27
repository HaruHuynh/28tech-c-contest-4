// Tính tổng hàm S(n) = 1^3 + 2^3 + 3^3 + 4^3 + .. + n^3 bằng đệ quy

#include <stdio.h>
#include <math.h>
#define ll long long 

ll sumPow3(int n){     // n nhỏ thì để int
    if(n == 0)
        return 0;
    else 
        return (ll)pow(n, 3) + sumPow3(n - 1);
}

int main() {
    int n;  // nhập n bằng int
    scanf("%d", &n);
    ll result = sumPow3(n);
    printf("%lld", result);
    return 0;
}
