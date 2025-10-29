// Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có phải toàn số chẵn hay không?
#include <stdio.h>

int checkEvenArray(int a[], int n){
    if(n == 0) return 1;
    if(a[n - 1] % 2 != 0) 
        return 0;
    return checkEvenArray(a, n - 1);
}
int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    if(checkEvenArray(a, n))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}