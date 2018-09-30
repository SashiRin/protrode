#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    cout << a * b - (a + b - 1) << endl;
    return 0;
}
