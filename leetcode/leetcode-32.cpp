/*
* ID: LeetCode 32
* Link: https://leetcode.com/problems/longest-valid-parentheses/
* Author: Yukirin
* Date: 2018-07-25
* Time: 4MS
* Memory: N/A
* Note: Stack and index
*/
static auto x = [](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> indexStack;
        indexStack.push(-1);
        int maxLen = -1;
        int curLen = 0;
        char c;
        for (int i = 0; i < s.length(); ++i) {
            c = s[i];
            if (c == '(') {
                indexStack.push(i);
            } else {
                indexStack.pop();
                if (!indexStack.empty()) {
                    curLen = i - indexStack.top();
                    maxLen = max(curLen, maxLen);
                } else {
                    indexStack.push(i);
                }
            }
        }
        maxLen = max(0, maxLen);
        return maxLen;
    }
};