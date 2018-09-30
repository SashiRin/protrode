#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <stack>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int r;
    cin >> r;
    if (r < 1200) {
        cout << "ABC" << endl;
    } else if (r < 2800) {
        cout << "ARC" << endl;
    } else {
        cout << "AGC" << endl;
    }
    return 0;
}
