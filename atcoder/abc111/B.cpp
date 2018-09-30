#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 111; i <= 999; i += 111) {
        if (i >= n) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
