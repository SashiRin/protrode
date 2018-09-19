/*
* ID: HDU 1061
* Link: http://acm.hdu.edu.cn/showproblem.php?pid=1061
* Author: Neroldy
* Date: 2018-09-19
* Time: 15MS
* Memory: 1792K
* Note: 打表，还有写代码要仔细。。。想好再写！
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
    vector<vector<int>> table(10);
    for (int i = 0; i < 10; ++i) {
        table[i].push_back(i);
        int t = i;
        while (true) {
            t = (t * i) % 10;
            if (t != i) {
                table[i].push_back(t);
            } else {
                break;
            }
        }
    }

    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        int rightDigit = n % 10;
        // Becareful!!
        int index = n % table[rightDigit].size() == 0 ? table[rightDigit].size() - 1 : n % table[rightDigit].size() - 1;
        cout << table[rightDigit][index] << endl;
    }
    return 0;
}
