#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (auto&c : s) {
        if (c == '1') {
            c = '9';
        } else if (c == '9') {
            c = '1';
        }
    }
    cout << s << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();