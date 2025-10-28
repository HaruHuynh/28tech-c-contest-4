// Cho một số nguyên không âm N, hãy in ra dạng biểu diễn nhị phân của số N.
#include <stdio.h>

void convert(long long n) {
    if(n < 2) 
        printf("%lld", n % 2);
    else {
        convert(n / 2);
        printf("%lld", n % 2);
    }
}

int main() {
    long long n;
    scanf("%lld", &n);
    convert(n);
}
