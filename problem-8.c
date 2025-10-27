// Cho 2 số a và b, hãy tính ước chung lớn nhất và bội chung nhỏ nhất của 2 số a và b. Trong đó hàm UCLN sử dụng đệ quy để tính.
// Gợi ý : BCNN(a, b) = a / UCLN * b thay vì a * b / UCLN để tránh việc lấy a * b bị tràn long long

#include <stdio.h>
#define ll long long

ll lcd(ll a, ll b) {
    if(b == 0)
        return a;
    else
        return lcd(b, a % b);
}

ll scd(ll a, ll b) {
    ll r = a / lcd(a, b) * b;
    return r;
}
 
int main() {
    ll a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld %lld", lcd(a, b), scd(a, b));
    return 0;
}