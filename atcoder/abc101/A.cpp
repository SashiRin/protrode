#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (auto c : s) {
        if (c == '+') ++cnt;
        else --cnt;
    }
    cout << cnt << endl;
    return 0;
}
