#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a * b % 2 == 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
