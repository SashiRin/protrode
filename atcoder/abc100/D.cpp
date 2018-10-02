#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> beauty(n);
    vector<ll> tastiness(n);
    vector<ll> popularity(n);
    for (int i = 0; i < n; ++i) {
        cin >> beauty[i];
        cin >> tastiness[i];
        cin >> popularity[i];
    }
    vector<ll> sum(n);
    ll ans = 0;
    ll cur;
    for (int i = -1; i <= 1; i += 2) {
        for (int j = -1; j <= 1; j += 2) {
            for (int k = -1; k <= 1; k += 2) {
                cur = 0;
                for (int x = 0; x < sum.size(); ++x) {
                    sum[x] = i * beauty[x] + j * tastiness[x] + k * popularity[x];
                }
                sort(sum.begin(), sum.end(), greater<ll>());
                for (int p = 0; p < m; ++p) {
                    cur += sum[p];
                }
                ans = max(cur, ans);
            }
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
