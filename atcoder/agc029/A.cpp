#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;
typedef vector<int> vi;
const int maxn = 100 + 10;

int main() {
    string s;
    cin >> s;
    ll ans = 0;
    ll cnt = 0;
    for (char c : s) {
        if (c == 'B') ++cnt;
        else ans += cnt;
    }
    cout << ans << endl;
    return 0;
}
