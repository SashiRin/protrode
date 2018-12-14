#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

class UnionFind {
private:
    vector<int> par;
public:
    UnionFind(int n) : par(n + 1) {
        for (int i = 1; i <= n; ++i) {
            par[i] = i;
        }
    }

    int find(int x) {
        if (par[x] == x) {
            return x;
        } else {
            return par[x] = find(par[x]);
        }
    }

    void unite(int x, int y) {
        int rx = find(x);
        int ry = find(y);
        if (rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y) {
        int rx = find(x);
        int ry = find(y);
        return rx == ry;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> nums(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> nums[i];
    }
    UnionFind tree(n);
    int xi, yi;
    for (int i = 1; i <= m; ++i) {
        cin >> xi >> yi;
        tree.unite(xi, yi);
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (tree.same(i, nums[i])) {
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
