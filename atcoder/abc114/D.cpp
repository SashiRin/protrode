#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

int findGreatNum(const vector<int>& primes, int target) {
    int res = 0;
    for (auto& x : primes) {
        if (x >= target) ++res;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> primes(n + 1);
    for (int i = 2; i <= n; ++i) {
        int cur = i;
        for (int j = 2; j <= i; ++j) {
            while (cur % j == 0) {
                primes[j]++;
                cur /= j;
            }
        }
    }
    int ans = 0;
    // 75
    ans += findGreatNum(primes, 74);
    // 25 * 3
    ans += findGreatNum(primes, 24) * (findGreatNum(primes, 2) - 1);
    // 15 * 5
    ans += findGreatNum(primes, 14) * (findGreatNum(primes, 4) - 1);
    // 5 * 5 * 3
    ans += findGreatNum(primes, 4) * (findGreatNum(primes, 4) - 1) * (findGreatNum(primes, 2) - 2) / 2;
    
    cout << ans << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
