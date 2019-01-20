#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll getInversePair(vector<ll>& nums, int start, int end, vector<ll>& copy) {
    if (start >= end) {
        return 0;
    }
    int mid = (end - start) / 2 + start;
    ll leftCnt = getInversePair(nums, start, mid, copy);
    ll rightCnt = getInversePair(nums, mid + 1, end, copy);
    int p = start;
    int q = mid + 1;
    int index = start;
    ll cnt = 0;
    while (p <= mid && q <= end) {
        if (nums[p] <= nums[q]) {
            copy[index++] = nums[p++];
            cnt += end - q + 1;
        } else {
            copy[index++] = nums[q++];
        }
    }
    while (p <= mid) copy[index++] = nums[p++];
    while (q <= end) copy[index++] = nums[q++];
    for (int i = start; i <= end; ++i) {
        nums[i] = copy[i];
    }
    return (leftCnt + rightCnt + cnt);
}

bool check(ll m, ll lim, const vector<ll> &nums, vector<ll> &sums, vector<ll> &copy) {
    sums[0] = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sums[i + 1] = sums[i];
        if (nums[i] >= m) {
            sums[i + 1]++;
        } else {
            sums[i + 1]--;
        }
    }
    ll res = getInversePair(sums, 0, sums.size() - 1, copy);
    return res >= lim;
}

int main() {
    ll n;
    cin >> n;
    vector<ll> nums(n);
    vector<ll> copy(n + 1);
    ll l = LONG_LONG_MAX;
    ll r = LONG_LONG_MIN;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        l = min(l, nums[i]);
        r = max(r, nums[i]);
    }
    vector<ll> sums(n + 1);
    ll lim = (n * (n + 1) / 2 + 1) / 2;
    ll m;
    ll ans = 0;
    while (l <= r) {
        m = (r - l) / 2 + l;
        if (check(m, lim, nums, sums, copy)) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << ans << endl;
    return 0;
}