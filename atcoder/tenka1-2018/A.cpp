#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;

static int speedUp = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int main() {
    string s;
    cin >> s;
    if (s.length() == 3) {
        reverse(s.begin(), s.end());
    }
    cout << s << endl;
    return 0;

}