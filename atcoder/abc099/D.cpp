#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

int cnt(int index, const vi& nums, const vector<vi>& D, int n) {
    int ret = 0;
    for (int i = 1; i <= n; ++i) {
        if (i == index) continue;
        ret += nums[i] * D[i][index];
    }
    return ret;
}

int main() {
    int n, c;
    cin >> n >> c;
    vector<vi> D(c + 1, vi(c + 1));
    vector<vi> colors(n + 1, vi(n + 1));
    vector<vi> nums(3, vi(c + 1, 0));
    for (int i = 1; i <= c; ++i) {
        for (int j = 1; j <= c; ++j) {
            cin >> D[i][j];
        }
    }
    int index = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> colors[i][j];
            index = (i + j) % 3;
            nums[index][colors[i][j]]++;
        }
    }
    ll ans = 1e9;
    ll cur1 = 0;
    ll cur2 = 0;
    ll cur3 = 0;
    for (int i = 1; i <= c; ++i) {
        cur1 = cnt(i, nums[0], D, c);
        for (int j = 1; j <= c; ++j) {
            if (j == i) continue;
            cur2 = cnt(j, nums[1], D, c);
            for (int k = 1; k <= c; ++k) {
                if (k == i || k == j) continue;
                cur3 = cnt(k, nums[2], D, c);
                ans = min(cur1 + cur2 + cur3, ans);
            }
        }
    }
    if (ans == 1e9) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();