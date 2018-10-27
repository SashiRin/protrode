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
    int k = sqrt(2 * n);
    if (k * (k + 1) == 2 * n) {
        cout << "Yes" << endl;
        // k is the number of subsets
        k = k + 1;
        cout << k << endl;
        vector<vi> nums(k + 1);
        int cnt = 1;
        for (int i = 1; i < k; ++i) {
            for (int j = i + 1; j <= k; ++j) {
                nums[i].push_back(cnt);
                nums[j].push_back(cnt);
                ++cnt;
            }
        }
        for (int i = 1; i <= k; ++i) {
            cout << k - 1 << " ";
            for (auto& x : nums[i]) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    else cout << "No" << endl;
    return 0;
}