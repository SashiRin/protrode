#include <bits/stdc++.h>
using namespace std;
const int maxn = 55555;

int main() {
    int n;
    cin >> n;
    vector<bool> primes(maxn, true);
    for (int i = 2; i < maxn; ++i) {
        if (primes[i]) {
            for (int j = i + i; j < maxn; j += i) {
                primes[j] = false;
            }
        }
    }
    vector<int> res;
    for (int i = 2; i < maxn; ++i) {
        if (primes[i] && i % 5 == 1) {
            res.push_back(i);
            if (res.size() >= n) {
                break;
            }
        }
    }
    for (int& x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
