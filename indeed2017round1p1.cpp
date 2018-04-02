/*
* ID: Indeed 2017 round1 problem 1
* Link: N/A
* Author: Neroldy
* Date: 2017-04-22
* Time: 2MS
* Memory: N/A
* Note: snake output, very simple. Attention the code simplicity.
*/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    if (M == 1)
        printf("%d %d\n", 1, 1);
    else
    {
        int turn = 1;
        int i = 1;
        int j = 1;
        int m = N;
        int n = N;
        while (i <= m && j <= n)
        {
            for (int j2 = j + 1; j2 <= n; ++j2)
            {
                ++turn;
                if (turn == M)
                {
                    printf("%d %d\n", i, j2);
                    return 0;
                }
            }
            for (int i2 = i + 1; i2 <= m; ++i2)
            {
                ++turn;
                if (turn == M)
                {
                    printf("%d %d\n", i2, n);
                    return 0;
                }
            }
            for (int n2 = n - 1; n2 >= j; --n2)
            {
                ++turn;
                if (turn == M)
                {
                    printf("%d %d\n", m, n2);
                    return 0;
                }
            }
            for (int m2 = m - 1; m2 >= i; --m2)
            {
                ++turn;
                if (turn == M)
                {
                    printf("%d %d\n", m2, j);
                    return 0;
                }
            }
            ++i;
            ++j;
            --m;
            --n;
        }
    }
}