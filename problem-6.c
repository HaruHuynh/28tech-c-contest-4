// Dãy số fibonacci là dãy số thỏa mãn : F1=0, F2=1, Fn=Fn-1+Fn-2. Hãy tìm số Fibonacci thứ n sử dụng đệ quy.
// Lưu ý : Code Fibonacci bằng đệ quy sẽ có độ phức tạp là O(1.618^n) nên chỉ áp dụng với n nhỏ, n lớn các bạn dùng vòng lặp, mảng

#include <stdio.h>

int fiBo(int n){
    if(n == 1) return 0;
    if(n == 0) return 1;
    else
        return fiBo(n - 1) + fiBo(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    int result = fiBo(n);
    printf("%d", result);
    return 0;
}