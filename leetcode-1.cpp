/*
* ID: LeetCode 1
* Link: https://leetcode.com/problems/two-sum/
* Author: SashiRin
* Date: 2018-04-02
* Update: 2018-04-04
* Time: 9MS
* Memory: N/A
* Note: N/A
*/
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); ++i)
        {
            int complete = target - nums[i];
            auto search = hashmap.find(complete);
            if (search != hashmap.end() && search->second != i)
            {
                vector<int> res = {search->second, i};
                return res;
            }
            hashmap.insert({nums[i], i});
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
