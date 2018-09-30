#include <bits/stdc++.h>

using namespace std;

// Becareful!!
static bool comp(pair<int, int> x, pair<int, int> y) {
    return x.second > y.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> nums(n);
    unordered_map<int, int> hashMap1;
    unordered_map<int, int> hashMap2;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        if (i & 1) {
            if (hashMap2.find(nums[i]) != hashMap2.end()) {
                hashMap2[nums[i]]++;
            } else {
                hashMap2[nums[i]] = 1;
            }
        } else {
            if (hashMap1.find(nums[i]) != hashMap1.end()) {
                hashMap1[nums[i]]++;
            } else {
                hashMap1[nums[i]] = 1;
            }
        }
    }
    if (hashMap1.size() == 1 && hashMap2.size() == 1) {
        if (nums[0] == nums[1]) {
            cout << n / 2 << endl;
        } else {
            cout << 0 << endl;
        }
    } else if (hashMap1.size() == 1) {
        vector<pair<int, int>> vec;
        for (auto it = hashMap2.begin(); it != hashMap2.end(); ++it) {
            pair<int, int> pr;
            pr.first = it->first;
            pr.second = it->second;
            vec.push_back(pr);
        }
        sort(vec.begin(), vec.end(), comp);
        for (auto pr : vec) {
            if (nums[0] != pr.first) {
                cout << n / 2 - pr.second << endl;
                break;
            }
        }
    } else if (hashMap2.size() == 1) {
        vector<pair<int, int>> vec;
        for (auto it = hashMap1.begin(); it != hashMap1.end(); ++it) {
            pair<int, int> pr;
            pr.first = it->first;
            pr.second = it->second;
            vec.push_back(pr);
        }
        sort(vec.begin(), vec.end(), comp);
        for (auto pr : vec) {
            if (nums[1] != pr.first) {
                cout << n / 2 - pr.second << endl;
                break;
            }
        }
    } else {
        vector<pair<int, int>> vec1, vec2;
        for (auto it = hashMap1.begin(); it != hashMap1.end(); ++it) {
            pair<int, int> pr;
            pr.first = it->first;
            pr.second = it->second;
            vec1.push_back(pr);
        }
        sort(vec1.begin(), vec1.end(), comp);
        for (auto it = hashMap2.begin(); it != hashMap2.end(); ++it) {
            pair<int, int> pr;
            pr.first = it->first;
            pr.second = it->second;
            vec2.push_back(pr);
        }
        sort(vec2.begin(), vec2.end(), comp);
        if (vec1[0].first != vec2[0].first) {
            cout << n - vec1[0].second - vec2[0].second << endl;
        } else {
            int sum = max(vec1[0].second + vec2[1].second, vec1[1].second + vec2[0].second);
            cout << n - sum << endl;
        }
    }

    return 0;
}
