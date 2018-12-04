#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

bool check(int i, int j, int c) {
    if (abs(c - i) + abs(c - j) > c) return false;
    if (abs(c - (i + 2)) + abs(c - j) > c) return false;
    if (abs(c - i) + abs(c - (j + 2)) > c) return false;
    if (abs(c - (i + 2)) + abs(c - (j + 2)) > c) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    n <<= 1;
    int ans = 0;
    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < n; j += 2) {
            if (check(i, j, n / 2)) {
                ++ans;
            }
        }
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
