#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (abs(a - c) <= d) cout << "Yes" << endl;
    else if (abs(a - b) <= d && abs(b - c) <= d) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
