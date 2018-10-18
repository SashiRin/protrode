#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int P;
    cin >> P;
    vi nums(P);
    map<int, int> hashMap;
    for (int i = 0; i < P; ++i) {
        cin >> nums[i];
        hashMap[nums[i]] = 0;
    }
    int n = hashMap.size();
    int cur = 0;
    int l = 0;
    int r = 0;
    int ans = 1e9;
    while (l < P) {
        while (r < P && cur < n) {
            hashMap[nums[r]]++;
            if (hashMap[nums[r++]] == 1) ++cur;
        }
        if (cur >= n) {
            ans = min(r - l, ans);
        } else {
            break;
        }
        hashMap[nums[l]]--;
        if (hashMap[nums[l++]] == 0) --cur;
    }
    cout << ans << endl;
    return 0;
}