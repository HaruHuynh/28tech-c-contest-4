// Cho một số nguyên không âm N, hãy in ra dạng biểu diễn nhị phân của số N.
#include <stdio.h>

void convert(long long n) {
    if(n < 2) 
        printf("%lld", n % 2); // in ra phần dư 
    else {
        convert(n / 2); // gọi hàm đệ quy để đưa ra phần nguyên của các số chia cho 2 
        printf("%lld", n % 2); // in ra phần dư (tức phần nhị phân) sau khi n < 2
    }
}

int main() {
    long long n;
    scanf("%lld", &n);
    convert(n);
}
