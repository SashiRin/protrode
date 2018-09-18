/*
* ID: LeetCode 3
* Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
* Author: Yukirin
* Date: 2018-06-28
* Time: 43MS
* Memory: N/A
* Note: DP and hash
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> dict;
        int longest = 0;
        int start = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (dict.find(s[i]) != dict.end())
            {
                start = max(dict[s[i]] + 1, start);
            }
            dict[s[i]] = i;
            longest = max(longest, i - start + 1);
        }
        return longest;
    }
};
