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
    int n;
    cin >> n;
    int x;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        ans += x - 1;
    }
    cout << ans << endl;
    return 0;
}
