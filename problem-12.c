// Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.
// Gợi ý : Để điều kiện dừng là khi N < 16 sẽ dễ xử lý trường hợp khi N = 0 hơn

#include <stdio.h>
#define ll long long 
void dq(ll n) {
    if (n < 16) {
        if (n <= 9) 
            printf("%d", n);
        else 
            printf("%c", n + 55);
    } 
	// •	Bảng mã ASCII:
	// •	'A' = 65
	// •	10 + 55 = 65 → in 'A'
	// •	11 + 55 = 66 → in 'B'
	// •	…
	// •	15 + 55 = 70 → in 'F'
    else {
        dq(n / 16);
        int r = n % 16;
        if (r <= 9) 
            printf("%d", r);
        else 
            printf("%c", r + 55);
    }
}

int main() {
    ll n;
    scanf("%lld", &n);
    dq(n);
    return 0;
}

    // •	10 → A
	// •	11 → B
	// •	12 → C
	// •	13 → D
	// •	14 → E
	// •	15 → F
