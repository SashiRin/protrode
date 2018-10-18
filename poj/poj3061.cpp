#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

int main() {
    int t;
    int n, s;
    int ans = 1e9;
    cin >> t;
    vi nums(maxn);
    while (t--) {
        cin >> n >> s;
        ans = 1e9;
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        int l = 0;
        int r = 0;
        ll cur = 0;
        while (l < n) {
            while (r < n && cur < s) {
                cur += nums[r++];
            }
            if (cur >= s) {
                ans = min(r - l, ans);
            } else {
                break;
            }
            cur -= nums[l++];
        }
        if (ans == 1e9) {
            cout << 0 << endl;
        } else {
            cout << ans << endl;
        }
    }
}