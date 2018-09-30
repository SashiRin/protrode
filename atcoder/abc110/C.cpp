#include <bits/stdc++.h>

using namespace std;

bool check(const string& s, const string& t) {
    unordered_map<char, int> sHash, tHash;
    int index = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (sHash.find(s[i]) != sHash.end()) {
            if (tHash.find(t[i]) == tHash.end()) {
                return false;
            } else {
                if (sHash[s[i]] != tHash[t[i]]) {
                    return false;
                }
            } 
        } else {
            if (tHash.find(t[i]) != tHash.end()) {
                return false;
            } else {
                sHash[s[i]] = tHash[t[i]] = index++;
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, t;
    cin >> s >> t;
    if (check(s, t)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
