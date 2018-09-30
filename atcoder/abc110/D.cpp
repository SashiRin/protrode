#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll MOD = 1000000007;

ll powMod(ll a, ll b) {
    if (b == 0) {
        return 1;
    } else if (b & 1) {
        return a * powMod(a, b - 1) % MOD;
    } else {
        ll half = powMod(a, b / 2);
        return half * half % MOD;
    }
}

ll calcComb(ll n, ll k) {
    if (k > n - k) {
        return calcComb(n, n - k);
    } else {
        ll ansMul = 1;
        ll ansDiv = 1;
        for (ll i = 0; i < k; ++i) {
            ansMul *= (n - i);
            ansDiv *= (k - i);
            ansMul %= MOD;
            ansDiv %= MOD;
        }
        ll ans = ansMul * powMod(ansDiv, MOD - 2) % MOD;
        return ans;
    }
}

int main() {
    ll n, m;
    cin >> n >> m;
    ll mcp = m;
    ll ans = 1;
    for (ll i = 2; i * i <= mcp; ++i) {
        if (mcp % i == 0) {
            ll cnt = 0;
            while (mcp % i == 0) {
                ++cnt;
                mcp /= i;
            }
            ans *= calcComb(n + cnt - 1, n - 1);
            ans %= MOD;
        }
    }
    if (mcp != 1) {
        ans *= calcComb(n + 1 - 1, n - 1);
        ans %= MOD;
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
