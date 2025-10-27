// Tính tổng hàm S(n) = 1 + 2 + 3 + 4 + .. + n bằng đệ quy.
// Gợi ý : Bài toán cơ sở : S(1) = 1, Công thức truy hồi : S(n) = n + S(n - 1) với n > 1
#include <stdio.h>

int sum(int n){
    if(n == 0)
        return 0;
    else return n + sum(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    if(n < 1) return 0;
    int result = sum(n);
    printf("%d", result);
}