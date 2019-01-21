#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;

int main() {
    vector<int> nums(3);
    for (int i = 0; i < 3; ++i) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    cout << nums[0] * nums[1] / 2 << endl;
    return 0;
}
