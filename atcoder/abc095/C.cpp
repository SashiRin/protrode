#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    ll ans = min(x, y) * min(a + b, 2 * c);
    if (y > x) {
        int remain = y - x;
        ans += remain * min(b, 2 * c);
    } else {
        int remain = x - y;
        ans += remain * min(a, 2 * c);
    }
    cout << ans << endl;
    return 0;
}
