#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;

int main() {
    int n, t;
    cin >> n >> t;
    int ans = 1e9;
    int ci, ti;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        cin >> ci >> ti;
        if (ti <= t) {
            found = true;
            ans = min(ans, ci);
        }
    }
    if (found)
        cout << ans << endl;
    else
        cout << "TLE" << endl;
    return 0;
}
