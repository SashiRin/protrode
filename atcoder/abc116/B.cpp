#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;

int f(int n) {
    if (n & 1) {
        return 3 * n + 1;
    } else {
        return n / 2;
    }
}

int main() {
    int s;
    cin >> s;
    unordered_set<int> st;
    st.insert(s);
    int a = s;
    int b;
    int m = 2;
    while (true) {
        b = f(a);
        if (st.count(b)) {
            cout << m << endl;
            return 0;
        } else {
            st.insert(b);
        }
        ++m;
        a = b;
    }
    return 0;
}
