#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int d, g;
    cin >> d >> g;
    vector<int> contests(d);
    vector<int> bonus(d);
    for (int i = 0; i < d; ++i) {
        cin >> contests[i] >> bonus[i];
    }
    ll ans = 1e9;
    for (int mask = 0; mask < 1 << d; ++mask) {
        int temp = mask;
        ll score = g;
        ll cnt = 0;
        int last;
        for (int i = 0; i < d; ++i) {
            if (temp & 1) {
                score -= (i + 1) * 100 * contests[i] + bonus[i];
                cnt += contests[i];
            } else {
                last = i;
            }
            temp >>= 1;
        }
        if (score <= 0) {
            ans = min(cnt, ans);
        } else {
            for (int j = 1; j < contests[last]; ++j) {
                if (j * (last + 1) * 100 >= score) {
                    cnt += j;
                    ans = min(cnt, ans);
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}