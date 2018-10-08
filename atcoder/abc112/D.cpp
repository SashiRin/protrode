#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> divisor;
    for (ll i = 1; i * i <= m; ++i) {
        if (m % i == 0) {
            divisor.push_back(i);
            if (i * i != m) {
                divisor.push_back(m / i);
            }
        }
    }
    sort(divisor.begin(), divisor.end(), greater<ll>());
    for (int i = 0; i < divisor.size(); ++i) {
        if (divisor[i] * n * 1ll <= m) {
            cout << divisor[i] << endl;
            return 0;
        }
    }
    return 0;
}
