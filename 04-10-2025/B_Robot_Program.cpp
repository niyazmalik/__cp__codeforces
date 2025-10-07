#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    ll n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    ll ans = 0;
    for(int i = 0; i < s.length(); i++) {
        x += s[i] == 'R' ? 1 : -1;
        k--;
        if(x == 0) {
            ans++;
            break;
        }
    }
    if(ans) {
        int xx = 0;
        int cnt = 0;
        for(int i = 0; i < s.length(); i++) {
            cnt += s[i] == 'R' ? 1 : -1;
            if(!cnt) {
                xx = i + 1;
                break;
            }
        }
        if(xx) ans += k / xx;
    }
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests = 1;
    cin >> tests;
    while(tests--) {
        run();
    }

    return 0;
}