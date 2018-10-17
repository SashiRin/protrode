#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string a;
    unordered_map<char, int> hashMap(26);
    for (auto c : s) {
        if (hashMap.find(c) != hashMap.end()) {
            ++hashMap[c];
        } else {
            hashMap[c] = 1;
        }
    }
    int ans = -1;
    int cur = 0;
    set<char> st;
    // careful for upper bound!! NOT n - 1
    for (int i = 1; i < n; ++i) {
        st.clear();
        cur = 0;
        a += s[i - 1];
        --hashMap[s[i - 1]];
        for (auto c : a) {
            if (st.find(c) == st.end()) {
                if (hashMap.find(c) != hashMap.end() && hashMap[c] > 0) {
                    ++cur;
                }
                st.insert(c);
            }
        }
        ans = max(cur, ans);
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
