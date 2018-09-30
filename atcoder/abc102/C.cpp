#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> nums(n);
    long long x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        nums[i] = x - (i + 1);
    }
    sort(nums.begin(), nums.end());
    long long b = nums[n / 2];
    long long sad = 0;
    for (int i = 0; i < n; ++i) {
        sad += abs(nums[i] - b);
    }
    cout << sad << endl;
    return 0;
}
