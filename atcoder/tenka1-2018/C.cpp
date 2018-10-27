#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;
typedef vector<int> vi;

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int main() {
    int n;
    cin >> n;
    vi nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    vi sign(n);
    // case1: down-up-down-up...
    sign[0] = -1;
    sign[n - 1] = (n & 1) ? -1 : 1;
    int minus = 1;
    for (int i = 1; i < n - 1; ++i) {
        sign[i] = 2 * minus;
        minus = -minus;
    }
    sort(sign.begin(), sign.end());
    ll ans1 = 0;
    for (int i = 0; i < n; ++i) {
        ans1 += sign[i] * nums[i];
    }
    // case2: up-down-up-down...
    sign[0] = 1;
    sign[n - 1] = (n & 1) ? 1 : -1;
    minus = -1;
    for (int i = 1; i < n - 1; ++i) {
        sign[i] = 2 * minus;
        minus = -minus;
    }
    sort(sign.begin(), sign.end());
    ll ans2 = 0;
    for (int i = 0; i < n; ++i) {
        ans2 += sign[i] * nums[i];
    }
    ll ans = max(ans1, ans2);
    cout << ans << endl;
    return 0;
}