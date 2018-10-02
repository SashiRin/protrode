#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll x;
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> x;
        while ((x & 1) == 0) {
            ++ans;
            x >>= 1;
        }
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
