#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;
typedef vector<int> vi;
const int maxn = 100 + 10;

int main() {
    int n, k;
    cin >> n >> k;
    vll nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    ll ans = INT_MAX;
    for (int i = 0; i <= n - k; ++i) {
        ans = min(ans, nums[i + k - 1] - nums[i]);
    }
    cout << ans << endl;
    return 0;
}
