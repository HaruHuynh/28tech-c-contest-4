// Cho một mảng số nguyên A gồm N phần tử, hãy in ra mảng theo thứ tự từ trái qua phải và từ phải qua trái bằng đệ quy. Bạn sẽ viết 2 hàm tương ứng với 2 yêu cầu.
#include <stdio.h>

void in1(int a[], int n){
    if(n != 0){
        printf("%d ", a[n - 1]);
        in1(a, n - 1);
    }
}

void in2(int a[], int n){
    if(n != 0){
        in2(a, n - 1);
        printf("%d ", a[n - 1]);
    }
}

int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    in2(a, n);
    printf("\n");
    in1(a, n);
    return 0;
}