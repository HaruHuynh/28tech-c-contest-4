// Cho 2 số nguyên không âm a và b. Hãy tính a^b%(10^9+7). Kiến thức bạn cần sử dụng là Binary Exponentiation.

#include <stdio.h>
#define ll long long
const int mod = 1000000007;

// Hàm lũy thừa nhị phân (đệ quy)
ll binpow(ll a, ll b) {
    if (b == 0) return 1;   // base case
    ll tmp = binpow(a, b / 2);   // chia nhỏ bài toán
    if (b % 2 == 0) {
        return (tmp % mod * tmp % mod) % mod;   // nếu b chẵn
    } else {
        return ((tmp % mod * tmp % mod) % mod * (a % mod)) % mod;  // nếu b lẻ
    }
}

int main() {
    ll a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n", binpow(a, b));
    return 0;
}