/*
* Name: Breadth First Search: Shortest Reach
* Link: https://www.hackerrank.com/challenges/bfsshortreach
* Author: Neroldy
* Date: 2017-01-22
* Language: C++
* Time: N/A
* Memory: N/A
* Note: BFS, shortest path
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1000 + 10;
int vis[maxn];
int g[maxn][maxn];
int len[maxn];
const int edge_length = 6;
void bfs(int s, int n)
{
    queue<int> q;
    vis[s] = 1;
    int q_top;
    for (int i = 1; i <= n; ++i)
    {
        if (g[s][i] == 1 && vis[i] == 0)
        {
            len[i] = 1;
            q.push(i);
            vis[i] = 1;
        }
    }
    while (!q.empty())
    {
        q_top = q.front();
        q.pop();
        for (int i = 1; i <= n; ++i)
        {
            if (g[q_top][i] == 1 && vis[i] == 0)
            {
                len[i] = len[q_top] + 1;
                q.push(i);
                vis[i] = 1;
            }
        }
    }
}
int main()
{
    int q, n, m, s;
    scanf("%d", &q);
    int x, y;
    while (q --)
    {
        memset(vis, 0, sizeof(vis));
        memset(g, 0, sizeof(g));
        memset(len, -1, sizeof(len));
        scanf("%d %d", &n, &m);
        for (int i = 0; i < m; ++i)
        {
            scanf("%d %d", &x, &y);
            g[x][y] = g[y][x] = 1;
        }
        scanf("%d", &s);
        bfs(s, n);
        for (int i = 1; i <= n; ++i)
        {
            if (i == s)
                continue;
            if (len[i] != -1)
            {
                cout << len[i] * edge_length << " ";
            }
            else
            {
                cout << -1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
