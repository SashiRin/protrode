#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ull S(ull i) {
    ull res = 0;
    while (i) {
        res += i % 10;
        i /= 10;
    }
    return res;
}

int main() {
    ull k;
    cin >> k;
    ull base = 1;
    ull begin = 1;
    for (ull i = 0; i < k; ++i) {
        cout << begin << endl;
        if (1.0 * (begin + base) / S(begin + base) > 1.0 * (begin + 2 * base) / S(begin + 2 * base)) {
            base *= 10;
        }
        begin += base;
    }
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
