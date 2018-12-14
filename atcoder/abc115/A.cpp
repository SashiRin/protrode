#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;
typedef vector<int> vi;
const int maxn = 100 + 10;

int main() {
    int d;
    cin >> d;
    cout << "Christmas";
    for (int i = 0; i < 25 - d; ++i) {
        cout << " Eve";
    }
    cout << endl;
    return 0;
}
