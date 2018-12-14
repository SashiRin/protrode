#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int mypow(int n, int p) {
    if (p == 0) return 1;
    else if (p & 1) {
        return n * mypow(n, p - 1);
    } else {
        int half = mypow(n, p >> 1);
        return half * half;
    }
}

int main() {
    int x;
    cin >> x;
    int ans = 1;
    int pMax = log2(x);
    int bMax = sqrt(x);
    for (int b = 2; b <= bMax; ++b) {
        for (int p = 2; p <= pMax; ++p) {
            int tmp = mypow(b, p);
            if (tmp <= x) ans = max(tmp, ans);
        }
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
