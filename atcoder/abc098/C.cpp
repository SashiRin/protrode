#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 1e9;
    int cur = 0;
    vector<int> numE(n);
    vector<int> numW(n);
    int totalE = 0;
    int totalW = 0;
    s.back() == 'E' ? ++totalE : ++totalW;
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] == 'E') {
            numE[i] = numE[i - 1] + 1;
            numW[i] = numW[i - 1];
            ++totalE;
        }
        else if (s[i - 1] == 'W') {
            numW[i] = numW[i - 1] + 1;
            numE[i] = numE[i - 1];
            ++totalW;
        }
    }
    for (int i = 0; i < n; ++i) {
        cur = numW[i] + (totalE - numE[i]);
        if (s[i] == 'E') cur -= 1;
        ans = min(cur, ans);
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