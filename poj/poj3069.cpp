/*
* ID: POJ 3069
* Link: http://poj.org/problem?id=3069
* Author: Neroldy
* Date: 2016-11-19
* Language: C++
* Time: 16MS
* Memory: 168K
* Note: make code simple and beautiful as much as you can
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <algorithm>
#include <queue>
using namespace std;
const int maxn = 1000 + 10;
int a[maxn];
int main()
{
    int R, n;
    int ans;
    while (~scanf("%d %d", &R, &n) && R != -1 && n != -1)
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        sort(a, a + n);
        int left;
        int pos;
        int i = 0;
        ans = 0;
        while (i < n)
        {
            left = a[i++];
            while (i < n && a[i] <= left + R) ++i;
            pos = a[i - 1];
            ++ans;
            while (i < n && a[i] <= pos + R) ++i;
        }
        printf("%d\n", ans);
    }
    return 0;
}
