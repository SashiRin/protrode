#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
#include <string>
#include <bitset>
#include <cmath>

using namespace std;

int getEdge(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int edge2 = getEdge(x1, y1, x2, y2);
    for (int x = -500; x <= 500; ++x) {
        for (int y = -500; y <= 500; ++y) {
            if (getEdge(x, y, x2, y2) == edge2) {
                if ((x - x2) * (y2 - y1) - (y - y2) * (x2 - x1) == -edge2) {
                    x3 = x;
                    y3 = y;
                }
            }
        }
    }
    for (int x = -500; x <= 500; ++x) {
        for (int y = -500; y <= 500; ++y) {
            if (getEdge(x, y, x3, y3) == edge2) {
                if ((x - x3) * (y3 - y2) - (y - y3) * (x3 - x2) == -edge2) {
                    x4 = x;
                    y4 = y;
                }
            }
        }
    }
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}
