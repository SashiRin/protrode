#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    auto it = upper_bound(nums.begin(), nums.end(), x);
    int d;
    if (it == nums.end()) {
        d = x - nums.back();
    } else if (it == nums.begin()) {
        d = nums[0] - x;
    } else {
        d = abs(*it - x);
        --it;
        d = min(d, abs(*it - x));
    }
    bool flag = true;
    for (int i = d; i >= 1; --i) {
        for (int j = 0; j < n; ++j) {
            if (abs(nums[j] - x) % i != 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << i << endl;
            break;
        } else {
            flag = true;
        }
    }

    return 0;
}
