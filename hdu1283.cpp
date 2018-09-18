/*
* ID: HDU 1283
* Link: http://acm.hdu.edu.cn/showproblem.php?pid=1283
* Author: Neroldy
* Date: 2018-09-18
* Time: 15MS
* Memory: 1816K
* Note: N/A
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

    int m1, m2, r1, r2, r3;
    string cmd;
    while (cin >> m1 >> m2) {
        r1 = 0;
        r2 = 0;
        r3 = 0;
        cin >> cmd;
        for (char c : cmd) {
            switch (c) {
                case 'A': r1 = m1; break;
                case 'B': r2 = m2; break;
                case 'C': m1 = r3; break;
                case 'D': m2 = r3; break;
                case 'E': r3 = r1 + r2; break;
                case 'F': r3 = r1 - r2; break;
                default: break;
            }
        }
        cout << m1 << "," << m2 << endl;
    }
    return 0;
}
