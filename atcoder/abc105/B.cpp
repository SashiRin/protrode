#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (4 * i + 7 * j == n) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
