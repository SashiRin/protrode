#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> vll;

int main() {
    string s;
    cin >> s;
    ll ans = 700;
    for (auto &c : s) {
        if (c == 'o') {
            ans += 100;
        }
    }
    cout << ans << endl;
    return 0;
}
