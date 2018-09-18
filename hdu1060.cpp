/*
* ID: HDU 1060
* Link: http://acm.hdu.edu.cn/showproblem.php?pid=1060
* Author: Neroldy
* Date: 2018-09-18
* Time: 0MS
* Memory: 1832K
* Note: n ^ n = a * 10 ^ x, log(n ^ n) = log(a) + x, a = 10 ^ (log(n ^ n) - x), where x = floor(log(n ^ n)), x is the number of digits of n ^ n, actually is floor(log(n ^ n))
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
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t --) {
        ll n;
        cin >> n;
        double t = n * log10(n);
        t = t - floor(t);
        ll a = pow(10, t);
        cout << a << endl;
    }
    return 0;
}
