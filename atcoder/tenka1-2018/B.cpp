#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int main() {
    vll nums(2);
    int k;
    cin >> nums[0] >> nums[1] >> k;
    int index;
    for (int i = 0; i < k; ++i) {
        index = i & 1;
        if (nums[index] & 1) --nums[index];
        nums[index] >>= 1;
        nums[!index] += nums[index];
    }
    cout << nums[0] << " " << nums[1] << endl;
    return 0;

}