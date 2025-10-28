// Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.
// Gợi ý : Để điều kiện dừng là khi N < 16 sẽ dễ xử lý trường hợp khi N = 0 hơn

#include <stdio.h>

void convert2(long long n){
    if(n < 16) {
        if(n < 10) printf("%lld", n);
        else printf("%c", 'A' + (n - 10));
    }else{
        convert2(n / 16);
        int r = n % 16;
        if(r < 10) printf("%d", r);
        else printf("%c", 'A' + (r - 10));
    }
}

int main() {
    long long n;
    scanf("%lld", &n);
    convert2(n);
    return 0;
}