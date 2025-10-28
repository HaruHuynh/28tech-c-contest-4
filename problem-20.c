// Cho số nguyên dương N. Bạn được thực hiện 3 thao tác sau đây:
// 1. Lấy N chia cho 2 nếu N chia hết cho 2.
// 2. Lấy N chia hết cho 3 nếu N chia hết cho 3.
// 3. Giảm N đi 1 đơn vị. Hãy đếm số thao tác ít nhất để biến đổi N về 1.
// Gợi ý : Gọi F(n) là hàm đếm số thao tác biến đổi n về 1, khi đó F(n) = min(F(n / 2), F(n / 3), F(n - 1)) chứ không được return về 1 trong 3 hàm kia. Bạn cần gọi 3 hàm đệ quy tương ứng với 3 thao tác, sau đó trả về số nhỏ nhất trong 3 hàm đó

#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))

int F(int n) {
    if (n == 1) return 0;

    int res = F(n-1);   // luôn có thể giảm 1
    if (n % 2 == 0) res = min(res, F(n/2));
    if (n % 3 == 0) res = min(res, F(n/3));

    return 1 + res;     // cộng thêm thao tác hiện tại
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", F(n));
    return 0;
}