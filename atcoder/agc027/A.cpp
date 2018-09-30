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
    int sum = 0;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        if (sum > x) {
            cout << i << endl;
            return 0;
        } else if (sum == x) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << n - 1 << endl;
    return 0;
}
