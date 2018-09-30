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
    string s, t;
    cin >> s >> t;
    if (s == t) {
        cout << "Yes" << endl;
    } else if (set<char>(s.begin(), s.end()) != set<char>(t.begin(), t.end())) {
        cout << "No" << endl;
    } else {
        for (int i = 0; i < s.length() - 1; ++i) {
            s.insert(s.begin(), s.back());
            s.pop_back();
            if (s == t) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "No" << endl;
    }
    return 0;
}
