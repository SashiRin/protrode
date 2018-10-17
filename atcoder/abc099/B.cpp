#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x = b - a;
    int res = (1 + x) * x / 2 - b;
    cout << res << endl;
    return 0;
}
