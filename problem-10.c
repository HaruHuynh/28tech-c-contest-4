// Tính tổng S(n) = 1/1 + 1/2 + 1/3 + ... + 1/n bằng đệ quy.
#include <stdio.h>
double harSum(int n){
    if(n == 1) 
        return 1;
    else
        return harSum(n - 1) + 1.0 / n;
}

int main() {
    double n; 
    scanf("%lf", &n);
    printf("%.3lf", harSum(n));
    return 0;
}