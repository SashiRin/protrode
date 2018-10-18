#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vi nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    ll ans = 0;
    int l = 0;
    int r = 0;
    int now = 0;
    while (l < n) {
        while (r < n && (nums[r] ^ now) == nums[r] + now) {
            ++ans;
            now ^= nums[r++];
        }
        now ^= nums[l++];
        ans += (r - l);
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
