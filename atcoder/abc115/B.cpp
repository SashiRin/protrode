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
    int sum = 0;
    int x;
    int maxNum = INT_MIN;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += x;
        maxNum = max(maxNum, x);
    }
    cout << sum - maxNum / 2 << endl;
    return 0;
}
