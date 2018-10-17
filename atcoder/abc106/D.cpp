#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int main() {
    ll n, m, q;
    cin >> n >> m >> q;
    vector<vector<ll>> nums(n + 1, vector<ll>(n + 1, 0));
    ll l, r;
    for (int i = 0; i < m; ++i) {
        cin >> l >> r;
        nums[l][r] += 1;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            nums[i][j] += nums[i - 1][j] + nums[i][j - 1] - nums[i - 1][j - 1];
        }
    }
    ll ans = 0;
    for (int i = 0; i < q; ++i) {
        cin >> l >> r;
        ans = nums[r][r] - nums[l - 1][r] - nums[r][l - 1] + nums[l - 1][l - 1];
        cout << ans << endl;
    }
    return 0;
}
