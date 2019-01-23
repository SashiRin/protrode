#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MOD = 1e9 + 7;

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    ll m = max({a, b, c});
    int left = a + b + c - m;
    for (int i = 0; i < k; ++i) {
        m <<= 1;
    }
    cout << m + left << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
