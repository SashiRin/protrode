#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;
typedef vector<int> vi;
const int maxn = 100 + 10;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> nums(maxn, vector<int>(maxn));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> nums[i][j];
        }
    }
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            nums[i][j] += max(nums[i + 1][j], nums[i + 1][j + 1]);
        }
    }
    cout << nums[1][1] << endl;
    return 0;
}
