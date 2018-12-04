#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> nums(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> nums[i];
        nums[i] += nums[i - 1];
    }
    vector<ll> res;
    ll ans = 0;
    for (int i = 0; i < nums.size() - 1; ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            res.push_back(nums[j] - nums[i]);
        }
    }
    for (int i = 40; i >= 0; --i) {
        ll p = pow(2, i);
        int cnt = 0;
        for (auto& x : res) {
            if (((ans + p) & x) == ans + p) ++cnt;
        }
        if (cnt >= k) ans += p;
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
