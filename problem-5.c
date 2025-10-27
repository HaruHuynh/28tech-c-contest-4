// Tính n giai thừa bằng đệ quy.
// Chú ý trường hợp n = 0 nên bạn cần để điều kiện dừng khi n = 0, để khi n = 1 nếu input n = 0 sẽ không có điểm dừng đệ quy

#include <stdio.h>

int Fibonacci(int n){
    if(n == 0)
        return 1;
    else    
        return n * Fibonacci(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int result = Fibonacci(n);
    printf("%d", result);
}