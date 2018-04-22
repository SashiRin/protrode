/*
* ID: LeetCode 9
* Link: https://leetcode.com/problems/palindrome-number/
* Author: SashiRin
* Date: 2018-04-22
* Time: 158MS
* Memory: N/A
* Note: N/A
*/
static int x=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0;
        int tmp = abs(x);
        while (tmp > 0)
        {
            y = y * 10 + tmp % 10;
            tmp /= 10;
        }
        return y == x;
    }
};
