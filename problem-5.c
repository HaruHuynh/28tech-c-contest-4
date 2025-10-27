// Tính n giai thừa bằng đệ quy.
// Chú ý trường hợp n = 0 nên bạn cần để điều kiện dừng khi n = 0, để khi n = 1 nếu input n = 0 sẽ không có điểm dừng đệ quy

#include <stdio.h>

int factorial(int n){
    if(n == 0)
    // Để đúng với định nghĩa 1! = 1, ta buộc phải có 0! = 1.
        return 1;
    else    
        return n * factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int result = factorial(n);
    printf("%d", result);
}