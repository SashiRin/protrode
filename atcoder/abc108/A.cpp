#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
#include <string>
#include <bitset>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    if (k % 2 == 0) {
        cout << (k / 2) * (k / 2) << endl;
    } else {
        cout << (k / 2) * (k / 2 + 1) << endl;
    }
    return 0;
}
