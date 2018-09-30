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

    int n;
    cin >> n;
    unordered_map<string, int> hashMap;
    vector<string> sVec(n);
    for (int i = 0; i < n; ++i) {
        cin >> sVec[i];
        if (hashMap.find(sVec[i]) != hashMap.end()) {
            cout << "No" << endl;
            return 0;
        } else {
            hashMap[sVec[i]] = 1;
        }
        if (i > 0 && sVec[i][0] != sVec[i - 1].back()) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
