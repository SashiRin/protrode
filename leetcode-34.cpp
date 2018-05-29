/*
* ID: LeetCode 34
* Link: https://leetcode.com/problems/search-for-a-range/
* Author: Yukirin
* Date: 2018-05-29
* Time: 12MS
* Memory: N/A
* Note: binary search, STL
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans;
        auto lb = lower_bound(nums.begin(), nums.end(), target);
        auto ub = upper_bound(nums.begin(), nums.end(), target);
        if (distance(lb, ub) == 0) {
            ans.push_back(-1);
            ans.push_back(-1);
        } else {
            ans.push_back(lb - nums.begin());
            ub--;
            ans.push_back(ub - nums.begin());
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 6;
    Solution solution;
    vector<int> res = solution.searchRange(nums, target);
    cout << res[0] << " " << res[1] << endl;

    return 0;
}
