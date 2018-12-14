#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
typedef vector<ll> vll;
typedef vector<int> vi;
const int maxn = 100 + 10;
vll levelCnt(51);
vll pattyCnt(51);

void eat(ll& ans, ll level, ll& layer) {
    if (layer <= 0) return;
    if (layer >= levelCnt[level]) {
        ans += pattyCnt[level];
        layer -= levelCnt[level];
        return;
    }
    if (level == 0) {
        ans += 1;
        layer -= 1;
    } else {
        layer -= 1;
        eat(ans, level - 1, layer);
        if (layer <= 0) return;
        ans += 1;
        layer -= 1;
        eat(ans, level - 1, layer);
        if (layer <= 0) return;
        layer -= 1;
    }
}

int main() {
    ll n, x;
    cin >> n >> x;
    ll ans = 0;
    levelCnt[0] = 1;
    pattyCnt[0] = 1;
    for (int i = 1; i <= 50; ++i) {
        levelCnt[i] = 3 + (levelCnt[i - 1] << 1);
        pattyCnt[i] = 1 + (pattyCnt[i - 1] << 1);
    }
    eat(ans, n, x);
    cout << ans << endl;
    // for (int i = 0; i <= 50; ++i) {
    //     printf("level: %i levelCnt: %lld pattyCnt: %lld\n", i, levelCnt[i], pattyCnt[i]);
    // }
    return 0;
}
