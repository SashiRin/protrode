#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
const ll MOD = 1e9 + 7;
const int maxn = 1e6 + 10;

struct edge {
    int s;
    int e;
    int w;
    edge(int s, int e, int w) {
        this->s = s;
        this->e = e;
        this->w = w;
    }
};

int main() {
    int L;
    cin >> L;
    vector<edge> graph;
    int r = log2(L);
    int n = r + 1;
    int x = 1;
    for (int i = 1; i < n; ++i) {
        graph.push_back(edge(i, i + 1, 0));
        graph.push_back(edge(i, i + 1, x));
        x <<= 1;
    }
    int w = 0;
    while (L & (x - 1)) {
        L = L & (x - 1);
        w += x;
        r = log2(L);
        graph.push_back(edge(r + 1, n, w));
        if (r <= 0) break;
        x = 1 << r;
    }
    cout << n << " " << graph.size() << endl;
    for (auto& e : graph) {
        cout << e.s << " " << e.e << " " << e.w << endl;
    }
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();