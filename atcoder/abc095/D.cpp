#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> vll;

int main() {
    ll n, c;
    cin >> n >> c;
    vll d(n), v(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i] >> v[i];
        if (i > 0) v[i] += v[i - 1];
    }
    vll cw(n), ccw(n);
    for (int i = 0; i < n; ++i) {
        cw[i] = v[i] - d[i];
        if (i > 0) cw[i] = max(cw[i], cw[i - 1]);
    }
    for (int i = n - 1; i >= 0; --i) {
        if (i == 0) {
            ccw[i] = v.back() - (c - d[i]);
        } else {
            ccw[i] = (v.back() - v[i - 1]) - (c - d[i]);
        }
        if (i < n - 1) ccw[i] = max(ccw[i], ccw[i + 1]);
    }
    ll cw_ccw = 0, ccw_cw = 0;
    for (int i = 0; i < n - 1; ++i) {
        cw_ccw = max(cw_ccw, v[i] - 2 * d[i] + ccw[i + 1]);
    }
    for (int i = n - 1; i > 0; --i) {
        ccw_cw = max(ccw_cw, v.back() - v[i - 1] - 2 * (c - d[i]) + cw[i - 1]);
    }
    ll ans = max(cw_ccw, ccw_cw);
    ans = max(ans, cw.back());
    ans = max(ans, ccw.front());
    cout << ans << endl;
    return 0;
}