#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

int dfs(string s, int n) {
    int res = 0;

    if (s != "") {
        if (stol(s) > n) {
            return 0;
        }
        if (s.find('3') != s.npos && s.find('5') != s.npos && s.find('7') != s.npos) {
            res = 1;
        }
    }

    for (char c : string("357")) {
        res += dfs(s + c, n);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    if (n < 357) {
        cout << 0 << endl;
    } else {
        cout << dfs("", n) << endl;
    }
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
