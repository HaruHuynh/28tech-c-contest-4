// Cho 2 số nguyên dương N và K. Hãy tính tổ hợp chập K của N. Tiện thể các bạn ôn lại một vài tính chất của tổ hợp chập K của N nhé.
#include <stdio.h>

int nCk(int n, int k){
    if(k == 0 || n == k)
        return 1;
    else 
        return nCk(n - 1, k - 1) + nCk(n - 1, k);
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d", nCk(n, k));
}