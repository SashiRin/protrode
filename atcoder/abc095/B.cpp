#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> vll;

int main() {
    int n, x;
    cin >> n >> x;
    ll iMoto;
    ll ans = n;
    ll minMoto = INT_MAX;
    for (int i = 0; i < n; ++i) {
        cin >> iMoto;
        minMoto = min(iMoto, minMoto);
        x -= iMoto;
    }
    ans += x / minMoto;
    cout << ans << endl;
    return 0;
}