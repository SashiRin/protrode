/*
* ID: LeetCode 7
* Link: https://leetcode.com/problems/reverse-integer/
* Author: SashiRin
* Date: 2018-04-22
* Time: 30MS
* Memory: N/A
* Note: N/A
*/
class Solution {
public:
    int reverse(int x) {
        if (x == 0)
            return 0;
        else if (x < 0)
            return _reverse(x, -1);
        else
            return _reverse(x, 1);
    }
private:
    int _reverse(long long x, int sign)
    {
        long long y = 0;
        while (x * sign > 0)
        {
            y *= 10;
            y += x % 10;
            x /= 10;
        }
        if (y > INT_MAX || y < INT_MIN)
            return 0;
        else return y;
    }
};
