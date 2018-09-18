/*
* ID: POJ 3253
* Link: http://poj.org/problem?id=3253
* Author: Neroldy
* Date: 2016-11-19
* Language: C++
* Time: 16MS
* Memory: 348K
* Note: huffman coding; ans should be long long and method direct sort array and sum is not correct
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
int main()
{
    int n;
    int x;
    int m1, m2;
    long long ans = 0;
    priority_queue<int, vector<int>, greater<int> > que;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        que.push(x);
    }
    while (que.size() > 1)
    {
        m1 = que.top();
        que.pop();
        m2 = que.top();
        que.pop();
        ans += (m1 + m2);
        que.push(m1 + m2);
    }
    printf("%lld\n", ans);
    return 0;
}
