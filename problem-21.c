// Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có đối xứng hay không bằng cách sử dụng hàm đệ quy.
#include <stdio.h>
#define ll long long

int dx(int a[], int l, int r){
    if(l >= r)
        return 1;
    else{
        if(a[l] != a[r]) return 0;
        else
            return dx(a, l + 1, r - 1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    if(dx(a, 0, n - 1)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}


// ll paLi(ll n, ll rev){
//     if(n == 0) return rev;
//     return paLi(n / 10, rev * 10 + n % 10);
// }

// int isPali(ll n){
//     return n == paLi(n, 0);
// }
