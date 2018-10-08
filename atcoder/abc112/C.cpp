#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;

struct clue {
    int x;
    int y;
    int h;
};

int main() {
    int n;
    cin >> n;
    vector<clue> clues(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> clues[i].x >> clues[i].y >> clues[i].h;
        if (clues[i].h > 0) {
            clues[0] = clues[i];
        }
    }
    bool found = true;
    for (int ix = 0; ix <= 100; ++ix) {
        for (int iy = 0; iy <= 100; ++iy) {
            int ih = abs(clues[0].x - ix) + abs(clues[0].y - iy) + clues[0].h;
            for (int i = 1; i <= n; ++i) {
                if (max(ih - abs(clues[i].x - ix) - abs(clues[i].y - iy), 0) == clues[i].h) continue;
                else {
                    found = false;
                    break;
                }
            }
            if (found) {
                cout << ix << " " << iy << " " << ih << endl;
                return 0;
            }
            found = true;
        }
    }
    return 0;
}
