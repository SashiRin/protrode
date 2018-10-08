#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

int main() {
    string s;
    cin >> s;
    vector<vector<ll>> dp(s.length() + 1, vector<ll>(4, 0));
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[0][2] = 0;
    dp[0][3] = 0;
    for (int i = 0; i < s.length(); ++i) {
        dp[i + 1][0] = (s[i] == '?' ? 3ll : 1ll) * dp[i][0] % MOD;
        for (int j = 1; j <= 3; ++j) {
            dp[i + 1][j] = (s[i] == '?' ? 3ll : 1ll) * dp[i][j] % MOD;
            if (s[i] == '?' || s[i] == "ABC"[j - 1]) {
                dp[i + 1][j] += dp[i][j - 1];
            }
            dp[i + 1][j] %= MOD;
        }
    }
    cout << dp[s.length()][3] << endl;
    return 0;
}