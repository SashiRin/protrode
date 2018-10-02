#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 1;
    n -= k;
    ans += ceil(1.0 * n / (k - 1));
    cout << ans << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
