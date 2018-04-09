/*
* ID: LeetCode 27
* Link: https://leetcode.com/problems/remove-element/
* Author: SashiRin
* Date: 2018/04/09
* Time: 7MS
* Memory: N/A
* Note: N/A
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); ++j)
        {
            if (nums[j] != val)
            {
                nums[i] = nums[j];
                ++i;
            }
        }
        return i;
    }
};

int main(int argc, char** argv)
{
    Solution solution;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int len = solution.removeElement(nums, val);
    cout << len << endl;
    for (int i = 0; i < len; ++i)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
