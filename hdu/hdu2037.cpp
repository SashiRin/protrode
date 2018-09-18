/*
* ID: HDU 2037
* Link: http://acm.hdu.edu.cn/showproblem.php?pid=2037
* Author: Neroldy
* Date: 2016-11-17
* Time: 0MS
* Memory: 1568K
* Note: N/A
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 100 + 10;
struct Node
{
    int start;
    int end;
};
bool cmp(const Node i, const Node j)
{
    if (i.end == j.end)
        return i.start < j.start;
    else
        return i.end < j.end;
}
int main()
{
    Node node[maxn];
    int n;
    int ans;
    while (~scanf("%d", &n) && n != 0)
    {
        ans = 0;
        memset(node, 0, sizeof(node));
        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &node[i].start, &node[i].end);
        }
        sort(node, node + n, cmp);
        int time = -1;
        for (int i = 0; i < n; ++i)
        {
            if (node[i].start >= time)
            {
                time = node[i].end;
                ++ans;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
