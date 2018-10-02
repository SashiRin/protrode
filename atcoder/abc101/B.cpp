#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    // Use m instead of n itself!
    int m = n;
    int div = 0;
    while (m) {
        div += m % 10;
        m /= 10;
    }
    if (n % div == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
