#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<int, int> P;
const int INF = 0x3f3f3f3f;

class Solution {
public:
    string concatLargestNumber(vector<int> &nums) {
        if (nums.empty()) {
            return "";
        }
        vector<string> strNums(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            strNums[i] = to_string(nums[i]);
        }
        sort(strNums.begin(), strNums.end(), cmp);
        string ans;
        for (auto &s : strNums) {
            ans += s;
        }
        return ans;
    }

private:
    static bool cmp(const string &x, const string &y) {
        string a = x + y;
        string b = y + x;
        return a < b;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    vector<int> nums = {3, 32, 321};
    cout << solution.concatLargestNumber(nums) << endl;
    return 0;
}
