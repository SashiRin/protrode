#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    string s;
    ll k;
    cin >> s >> k;
    if (k > s.length()) {
        for (auto c : s) {
            if (c != '1') {
                cout << c << endl;
                break;
            }
        }
    } else {
        for (int i = 0; i < k; ++i) {
            if (s[i] != '1') {
                cout << s[i] << endl;
                return 0;
            }
        }
        cout << s[k - 1] << endl;
    }
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
