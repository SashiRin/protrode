/*
* ID: LeetCode 13
* Link: https://leetcode.com/problems/roman-to-integer/
* Author: SashiRin
* Date: 2018-06-28
* Time: 130MS
* Memory: N/A
* Note: Map
*/
class Solution
{
public:
    int romanToInt(string s)
    {
        if (s.empty())
            return 0;
        unordered_map<char, int> table = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
        };
        int ans = 0;
        for (int i = 0; i < s.length() - 1; ++i) {
            if (table[s[i]] < table[s[i + 1]]) {
                ans -= table[s[i]];
            } else {
                ans += table[s[i]];
            }
        }
        ans += table[s.back()];
        return ans;
    }
};
