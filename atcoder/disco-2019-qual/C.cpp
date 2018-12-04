#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

ll powMod(ll c, ll n) {
    if (n == 0) {
        return 1;
    } else if (n & 1) {
        return c * powMod(c, n - 1) % MOD;
    } else {
        ll half = powMod(c, n >> 1) % MOD;
        return half * half % MOD;
    }
}

int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        ll pCnt = (powMod(i, 10) + MOD - powMod(i - 1, 10)) % MOD;
        ll qCnt = powMod(floor(n / i), 10);
        ans = (ans + pCnt * qCnt) % MOD;
    }
    cout << ans << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
