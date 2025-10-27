// Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + .. 
// Gợi ý : Bài toán cơ sở : S(1) = 1, Công thức truy hồi : S(n) = n^2 + S(n - 1) với n > 1

#include <stdio.h>
#include <math.h>

int sumPower(int n){
    if(n == 0) 
        return 0;
    else 
        return pow(n, 2) + sumPower(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int result = sumPower(n);
    printf("%d", result);
}