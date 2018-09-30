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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<vector<int>> grid(h, vector<int>(w));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> grid[i][j];
        }
    }
    int n = 0;
    bool flag = true;
    typedef pair<int, int> index;

    vector<pair<index, index>> process;
    for (int i = 0; i < h; ++i) {
        if (flag) {
            for (int j = 0; j < w; ++j) {
                if (grid[i][j] % 2 == 1) {
                    if (j == w - 1) {
                        if (i != h - 1) {
                            index from(i + 1, j + 1);
                            index to(i + 1 + 1, j + 1);
                            grid[i][j] -= 1;
                            grid[i + 1][j] += 1;
                            ++n;
                            process.push_back(pair<index, index>(from, to));
                        }
                    } else {
                        index from(i + 1, j + 1);
                        index to(i + 1, j + 1 + 1);
                        grid[i][j] -= 1;
                        grid[i][j + 1] += 1;
                        ++n;
                        process.push_back(pair<index, index>(from, to));
                    }
                }
            }
        } else {
            for (int j = w - 1; j >= 0; --j) {
                if (grid[i][j] % 2 == 1) {
                    if (j == 0) {
                        if (i != h - 1) {
                            index from(i + 1, j + 1);
                            index to(i + 1 + 1, j + 1);
                            grid[i][j] -= 1;
                            grid[i + 1][j] += 1;
                            ++n;
                            process.push_back(pair<index, index>(from, to));
                        }
                    } else {
                        index from(i + 1, j + 1);
                        index to(i + 1, j - 1 + 1);
                        grid[i][j] -= 1;
                        grid[i][j - 1] += 1;
                        ++n;
                        process.push_back(pair<index, index>(from, to));
                    }
                }
            }
        }
        flag = !flag;
    }
    cout << n << endl;
    for (auto elem : process) {
        cout << elem.first.first << " " << elem.first.second << " " << elem.second.first << " " << elem.second.second << endl;
    }
    return 0;
}
