#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int ans = INT_MAX;
    int cur = 0;
    for (int i = 0; i < n - k + 1; ++i) {
        if (nums[i] >= 0) {
            cur = nums[i + k - 1];
        } else if (nums[i + k - 1] <= 0){
            cur = -nums[i];
        } else if (nums[i] < 0 && nums[i + k - 1] > 0) {
            cur = min(2 * -nums[i] + nums[i + k - 1], -nums[i] + 2 * nums[i + k - 1]);
        }
        ans = min(ans, cur);
    }
    cout << ans << endl;
    return 0;
}
