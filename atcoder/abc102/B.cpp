#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num_min = INT_MAX;
    int num_max = INT_MIN;
    int x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        num_min = min(num_min, x);
        num_max = max(num_max, x);
    }
    cout << num_max - num_min << endl;
    return 0;
}
