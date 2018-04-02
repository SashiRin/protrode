/*
* ID: POJ 3617
* Link: http://poj.org/problem?id=3617
* Author: Neroldy
* Date: 2016-11-24
* Language: C++
* Time: 0MS
* Memory: 168K
* Note: 80 char to new line
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <algorithm>
#include <queue>
using namespace std;
const int maxn = 2000 + 10;
char str[maxn];
int main()
{
    int n;
    char c;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        c = getchar();
        if (c == '\n')
        {
            c = getchar();
        }
        str[i] = c;
    }
    int a = 0;
    int b = n - 1;
    int cnt = 0;
    while (a <= b)
    {
        bool left = false;
        for (int i = 0; a + i <= b; ++i)
        {
            if (str[a + i] < str[b - i])
            {
                left = true;
                break;
            }
            else if (str[a + i] > str[b - i])
            {
                left = false;
                break;
            }
        }
        if (left) putchar(str[a++]);
        else putchar(str[b--]);
        printf(++cnt % 80 ? "" : "\n");
    }
    return 0;
}
