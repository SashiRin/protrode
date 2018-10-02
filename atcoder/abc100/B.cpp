#include <bits/stdc++.h>

using namespace std;
int main() {
    int d, n;
    cin >> d >> n;
    int base = 1;
    for (int i = 0; i < d; ++i) {
        base *= 100;
    }
    int ans = n * base;
    if (n == 100) {
        ans += base;
    }
    cout << ans << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
