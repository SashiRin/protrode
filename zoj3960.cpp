/*
* ID: ZOJ 3960
* Link: https://vjudge.net/problem/ZOJ-3960
* Author: Neroldy
* Date: 2017-05-02
* Language: C++
* Time: 340MS
* Memory: 300K
* Note: STL: map and vector
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int t;
    int n, q;
    int c;
    map<string, vector<int> > friends;
    cin >> t;
    while (t --)
    {
        friends.clear();
        cin >> n >> q;
        cin >> c;
        string name;
        for (int i = 0; i < c; ++i)
        {
            cin >> name;
            friends[name] = vector<int>();
        }
        int tot;
        for (int i = 0; i < q; ++i)
        {
            cin >> tot;
            for (int j = 0; j < tot; ++j)
            {
                cin >> name;
                friends[name].push_back(i);
            }
        }
        //
//        auto i = friends.begin();
//        for(; i != friends.end(); ++i)
//        {
//            cout << "key " << i->first << endl;
//            for (auto j = i->second.begin(); j != i->second.end(); ++j)
//            {
//                cout << *j << " ";
//            }
//            cout << endl;
//        }
        //
        vector<int> res;
        int x;
        for (int i = 0; i < n; ++i)
        {
            res.clear();
            for (int j = 0; j < q; ++j)
            {
                cin >> x;
                if (x == 1)
                    res.push_back(j);
            }
            map<string, vector<int> >::iterator it = friends.begin();
            int cnt = 0;
            string ans_name;
            for (; it != friends.end(); ++it)
            {
                if (res == it->second)
                {
                    ++cnt;
                    ans_name = it->first;
                }
            }
            if (cnt == 1)
                cout << ans_name << endl;
            else
                cout << "Let's go to the library!!" << endl;
        }
    }
}
