#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h, w;
    cin >> h >> w;
    vector<vector<char>> grids(h, vector<char>(w));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> grids[i][j];
        }
    }
    bool over = true;
    bool allWhite = true;
    while (true) {
        over = true;

        for (int i = 0; i < grids.size(); ++i) {
            allWhite = true;
            for (int j = 0; j < grids[0].size(); ++j) {
                if (grids[i][j] == '#') {
                    allWhite = false;
                    break;
                }
            }
            if (allWhite) {
                grids.erase(grids.begin() + i);
                --i;
                over = false;
            }
        }

        for (int j = 0; j < grids[0].size(); ++j) {
            allWhite = true;
            for (int i = 0; i < grids.size(); ++i) {
                if (grids[i][j] == '#') {
                    allWhite = false;
                    break;
                }
            }
            if (allWhite) {
                for (int k = 0; k < grids.size(); ++k) {
                    grids[k].erase(grids[k].begin() + j);
                }
                --j;
                over = false;
            }
        }

        if (over) {
            break;
        }
    }
    for (int i = 0; i < grids.size(); ++i) {
        for (int j = 0; j < grids[0].size(); ++j) {
            cout << grids[i][j];
        }
        cout << endl;
    }


    return 0;
}
