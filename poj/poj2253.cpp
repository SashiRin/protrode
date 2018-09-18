/*
* ID: POJ 2253
* Link: http://poj.org/problem?id=2253
* Author: Neroldy
* Date: 2016-12-17
* Language: C++
* Time: 0MS
* Memory: 516K
* Note: Dijkstra, attention the presentation
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
#include <algorithm>
#include <queue>
using namespace std;
const int maxn = 200 + 10;
double kmap[maxn][maxn];
double dis[maxn];
int a[maxn][2];
int vis[maxn];
int main()
{
    int n;
    int cnt = 0;
    while (~scanf("%d", &n) && n != 0)
    {
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &a[i][0], &a[i][1]);
        }
        for (int i = 0; i < n - 1; ++i)
        {
            kmap[i][i] = 0;
            for (int j = i + 1; j < n; ++j)
            {
                double dx = a[i][0] - a[j][0];
                double dy = a[i][1] - a[j][1];
                kmap[i][j] = kmap[j][i] = sqrt((dx * dx) + (dy * dy));
            }
        }
        for (int i = 0; i < n; ++i)
        {
            dis[i] = kmap[0][i];
        }
        vis[0] = 1;
        int k;
        for (int i = 1; i < n; ++i)
        {
            double minDis = 99999999;
            for (int j = 0; j < n; ++j)
            {
                if (dis[j] < minDis && vis[j] == 0)
                {
                    minDis = dis[j];
                    k = j;
                }
            }
            vis[k] = 1;
            for (int j = 0; j < n; ++j)
            {
                if ((dis[j] > max(dis[k], kmap[k][j])) && vis[j] == 0)
                {
                    dis[j] = max(dis[k], kmap[k][j]);
                }
            }
        }
        printf("Scenario #%d\n", ++cnt);
        printf("Frog Distance = %.3f\n\n", dis[1]);
    }
    return 0;
}
