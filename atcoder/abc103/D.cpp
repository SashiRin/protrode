#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool comp(const pair<int, int>& x, const pair<int, int>& y) {
    if (x.first == y.first) return x.second < y.second;
    else return x.first < y.first;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> requests(m);
    for (int i = 0; i < m; ++i) {
        cin >> requests[i].first >> requests[i].second;
    }
    sort(requests.begin(), requests.end(), comp);
    int ans = 1;
    int l = requests[0].first;
    int r = requests[0].second;
    for (int i = 1; i < m; ++i) {
        if (requests[i].first >= r) {
            ++ans;
            r = requests[i].second;
        } else {
            if (requests[i].second < r) {
                r = requests[i].second;
            }
        }
    }
    cout << ans << endl;
    return 0;
}