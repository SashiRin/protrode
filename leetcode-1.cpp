/*
* ID: LeetCode 1
* Link: https://leetcode.com/problems/two-sum/
* Author: SashiRin
* Date: 2018-04-02
* Time: 9MS
* Memory: N/A
* Note: N/A
*/
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
struct Node
{
    int value;
    int index;
};

bool cmp(const Node x, const Node y)
{
    return x.value < y.value;
}

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<Node> nums_s(nums.size());
        for (int i = 0; i < nums_s.size(); ++i)
        {
            nums_s[i].value = nums[i];
            nums_s[i].index = i;
        }
        sort(nums_s.begin(), nums_s.end(), cmp);
        int i = 0;
        int j = nums.size() - 1;
        while (i < j)
        {
            if (nums_s[i].value + nums_s[j].value > target)
                --j;
            else if (nums_s[i].value + nums_s[j].value < target)
                ++i;
            else
            {
                if (nums_s[i].index > nums_s[j].index)
                {
                    vector<int> res = {nums_s[j].index, nums_s[i].index};
                    return res;
                }
                else
                {
                    vector<int> res = {nums_s[i].index, nums_s[j].index};
                    return res;
                }
            }
        }
    }
};

int main(int argc, char** argv)
{
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = solution.twoSum(nums, target);
    for (int i = 0; i < res.size(); ++i)
    {
        cout << res[i] << endl;
    }
    return 0;
}
