#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll cubic(ll n) {
    return 1ll * n * n * n;
}

int main() {
    ll n, k;
    cin >> n >> k;
    if (k & 1) {
        ll ans = n / k;
        cout << cubic(ans) << endl;
    } else {
        ll ans1 = n / k;
        k /= 2;
        ll ans2 = n / k;
        ans2 -= ans1;
        cout << cubic(ans1) + cubic(ans2) << endl;
    }
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
