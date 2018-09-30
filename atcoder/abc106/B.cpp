#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    if (n < 105) {
        cout << 0 << endl;
    } else if (n >= 105 && n < 135){
        cout << 1 << endl;
    } else if (n >= 135 && n < 165){
        cout << 2 << endl;
    } else if (n >= 165 && n < 189){
        cout << 3 << endl;
    } else if (n >= 189 && n < 195) {
        cout << 4 << endl;
    } else {
        cout << 5 << endl;
    }
    return 0;
}
