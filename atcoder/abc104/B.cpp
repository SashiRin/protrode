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
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    if (s[0] != 'A') {
        cout << "WA" << endl;
    } else {
        int cntC = 0;
        int indexC = -1;
        for (int i = 2; i < s.length() - 1; ++i) {
            if (s[i] == 'C') {
                cntC++;
                indexC = i;
            }
        }
        if (cntC != 1) {
            cout << "WA" << endl;
        } else {
            bool flag = true;
            for (int i = 1; i < s.length(); ++i) {
                if (i == indexC) {
                    continue;
                } else {
                    if (s[i] >= 'a' && s[i] <= 'z') {
                        continue;
                    } else {
                        cout << "WA" << endl;
                        flag = false;
                        break;
                    }
                }
            }
            if (flag)
                cout << "AC" << endl;
        }

    }
    return 0;
}
