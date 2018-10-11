#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;

int main() {
    ll n, m;
    cin >> n >> m;
    vll nums(n + 1);
    unordered_map<ll, ll> hashMap;
    hashMap[0] = 1;
    ll left = 0;
    ll ans = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> nums[i];
        nums[i] += nums[i - 1];
        left = nums[i] % m;
        if (hashMap.find(left) == hashMap.end()) {
            hashMap[left] = 1;
        } else {
            ans += hashMap[left]++;
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
