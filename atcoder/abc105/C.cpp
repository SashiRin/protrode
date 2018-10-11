#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    ll v = 1;
    string ret;
    while (n) {
        if (n % (2 * v)) {
            ret = '1' + ret;
            n -= v;
        } else {
            ret = '0' + ret;
        }
        v *= -2;
    }
    if (ret == "") {
        cout << 0 << endl;
    } else {
        cout << ret << endl;
    }
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
