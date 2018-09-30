#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int maxx = INT_MIN;
    int miny = INT_MAX;
    int k;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        maxx = max(maxx, k);
    }
    for (int i = 0; i < m; ++i) {
        cin >> k;
        miny = min(miny, k);
    }
    x = max(x, maxx);
    y = min(y, miny);
    if (y > x) {
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }

    return 0;
}
