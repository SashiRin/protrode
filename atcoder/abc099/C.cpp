#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 10);
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        dp[i] = dp[i - 1] + 1;
        for (int j = 6; j <= i; j *= 6) dp[i] = min(dp[i], dp[i - j] + 1);
        for (int j = 9; j <= i; j *= 9) dp[i] = min(dp[i], dp[i - j] + 1);
    }
    cout << dp[n] << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
