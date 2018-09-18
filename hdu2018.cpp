/*
* ID: HDU 2018
* Link: http://acm.hdu.edu.cn/showproblem.php?pid=2018
* Author: Neroldy
* Date: 2018-09-18
* Time: 31MS
* Memory: 1812K
* Note: Like Fibonacci number
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <vector>
#include <set>
#include <unordered_map>
#include <cstdio>
#include <cmath>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    const int maxn = 55;
    vector<int> nums(maxn);
    nums[1] = 1;
    nums[2] = 2;
    nums[3] = 3;
    nums[4] = 4;
    int n;
    while (cin >> n && n) {
        if (n > 4 && nums[n] == 0) {
            for (int i = 5; i <= n; ++i) {
                // Becareful! Using i not n!!
                nums[i] = nums[i - 1] + nums[i - 3];
            }
        }
        cout << nums[n] << endl;
    }
    return 0;
}
