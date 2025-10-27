// Tính tổng hàm S(n) = -1 + 2 -3 + 4 - 5 + 6 + ... + (-1)^n * n bằng đệ quy
// Gợi ý : Chia ra 2 trường hợp n chẵn và n lẻ
	// •	Nếu n chẵn:
    // (n) = S(n-1) + n
	// •	Nếu n lẻ:
    // (n) = S(n-1) - n

#include <stdio.h>
#include <math.h>

int sumOddEven(int n){
    if(n == 0)
        return 0;
    if(n % 2 == 0)
        return sumOddEven(n - 1) + n;
    else 
        return sumOddEven(n - 1) - n;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = sumOddEven(n);
    printf("%d", result);
}