#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;
typedef long long ll;
const double INF = 1e9;
const int maxn = 100;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<double> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    double lb = 0.0;
    double ub = INF;
    for (int i = 0; i < maxn; ++i) {
        double mid = (ub - lb) / 2.0 + lb;
        ll cnt = 0;
        for (int j = 0; j < n; ++j) {
            cnt += (ll) (nums[j] / mid);
        }
        if (cnt >= k) {
            lb = mid;
        } else {
            ub = mid;
        }
    }
    printf("%.2f\n", floor(ub * 100) / 100);
    return 0;
}