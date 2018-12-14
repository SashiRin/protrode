#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

int main() {
    string s;
    int k;
    cin >> s >> k;
    set<string> st;
    for (int i = 0; i < s.length(); ++i) {
        for (int j = 1; j <= k; ++j) {
            st.insert(s.substr(i, j));
        }
    }
    vector<string> ans(st.begin(), st.end());
    sort(ans.begin(), ans.end());
    cout << ans[k - 1] << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
