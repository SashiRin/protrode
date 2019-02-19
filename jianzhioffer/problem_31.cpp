#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<int, int> P;
const int INF = 0x3f3f3f3f;

class Solution {
public:
    int greatestSumOfSubarrays(vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        } else if (nums.size() == 1) {
            return nums[0];
        }
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        int ans = dp[0];
        for (int i = 1; i < nums.size(); ++i) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    vector<int> nums = {1, -2, 3, 10, -4, 7, 2, -5};
    cout << solution.greatestSumOfSubarrays(nums) << endl;
    return 0;
}
