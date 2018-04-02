/*
* ID: POJ 1852
* Link: http://poj.org/problem?id=1852
* Author: Neroldy
* Date: 2016-11-19
* Time: 125MS
* Memory: 64K
* Note: N/A
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    int l, n;
    int ans_min, ans_max;
    int x;
    while (t --)
    {
        ans_min = 0;
        ans_max = 0;
        scanf("%d %d", &l, &n);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &x);
            ans_min = max(min(x, l - x), ans_min);
            ans_max = max(max(x, l - x), ans_max);
        }
        printf("%d %d\n", ans_min, ans_max);
    }
    return 0;
}
