#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    cout << ((n % k == 0) ? 0 : 1) << endl;

    return 0;
}
