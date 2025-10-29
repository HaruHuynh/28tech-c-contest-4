// Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có phải là mảng tăng dần hay không, mảng tăng dần được định nghĩa là mảng mà phần tử hiện tại luôn lớn hơn các phần tử đứng trước nó.
#include <stdio.h>

int checkIncrease(int a[], int n){
    if(n <= 1) return 1;
    if(a[n - 1] <= a[n - 2]) return 0;
    return checkIncrease(a, n - 1);
}

int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    if(checkIncrease(a, n))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}