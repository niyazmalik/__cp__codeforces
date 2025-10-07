#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int ans = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cnt = s[i] == '0' ? cnt + 1 : 0;
        if(cnt == m) {
            ans++;
            i = i + k - 1;
            cnt = 0;
        }
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