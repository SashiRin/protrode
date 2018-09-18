/*
* ID: POJ 2386
* Link: http://poj.org/problem?id=2386
* Author: Neroldy
* Date: 2016-11-23
* Language: C++
* Time: 16MS
* Memory: 488K
* Note: dfs
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <algorithm>
#include <queue>
using namespace std;
const int maxn = 100 + 10;
const int maxm = 100 + 10;
int n, m;
char field[maxn][maxm];
void dfs(int x, int y)
{
    field[x][y] = '.';
    int nx, ny;
    // access 8-neighbor
    for (int dx = -1; dx <= 1; ++dx)
    {
        for (int dy = -1; dy <= 1; ++dy)
        {
            nx = x + dx;
            ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && field[nx][ny] == 'W')
            {
                dfs(nx, ny);
            }
        }
    }
}
int main()
{
    char c;
    int ans = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            c = getchar();
            // skip '\n'
            if (c != '.' && c != 'W')
            {
                c = getchar();
            }
            field[i][j] = c;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (field[i][j] == 'W')
            {
                dfs(i, j);
                ++ans;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
