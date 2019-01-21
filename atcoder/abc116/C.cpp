#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    int ans = 0;
    for (int i = 1; i <= 100; ++i) {
        int curr = 0;
        bool found = false;
        for (int j = 0; j < n; ++j) {
            if (heights[j] >= 1) {
                heights[j]--;
                if (!found) {
                    ++curr;
                    found = true;
                }
            } else {
                found = false;
            }
        }
        ans += curr;
    }
    cout << ans << endl;
    return 0;
}
