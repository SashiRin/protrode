#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;

int main() {
    ll n;
    cin >> n;
    vll nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        if (i > 0) nums[i] += nums[i - 1];
    }
    int l = 1;
    int r = 3;
    ll l1, l2, l1t, l2t;
    ll r1, r2, r1t, r2t;
    ll ans = 1e9;
    ll tmin, tmax;
    for (int middle = 2; middle < n - 1; ++middle) {
        while (l < middle - 1) {
            l1 = nums[l - 1];
            l2 = nums[middle - 1] - l1;
            l1t = nums[l];
            l2t = nums[middle - 1] - l1t;
            if (abs(l1 - l2) > abs(l1t - l2t)) ++l;
            else break;
        }
        l1 = nums[l - 1];
        l2 = nums[middle - 1] - l1;

        while (r < n - 1) {
            while (r <= middle) ++r;
            r1 = nums[r - 1] - nums[middle - 1];
            r2 = nums[n - 1] - nums[r - 1];
            r1t = nums[r] - nums[middle - 1];
            r2t = nums[n - 1] - nums[r];
            if (abs(r1 - r2) > abs(r1t - r2t)) ++r;
            else break;
        }
        r1 = nums[r - 1] - nums[middle - 1];
        r2 = nums[n - 1] - nums[r - 1];
        tmin = min({l1, l2, r1, r2});
        tmax = max({l1, l2, r1, r2});
        ans = min(tmax - tmin, ans);
    }
    cout << ans << endl;
    return 0;
}
