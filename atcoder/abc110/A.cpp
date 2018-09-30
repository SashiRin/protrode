#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> nums(3);
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums.begin(), nums.end(), greater<int>());
    cout << nums[0] * 10 + nums[1] + nums[2] << endl;
    return 0;
}
