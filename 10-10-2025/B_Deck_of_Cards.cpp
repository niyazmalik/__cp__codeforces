#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(k == n) {
        cout << string(n, '-') << endl;
        return;
    }
    int cntt = 0, cntb = 0, cnte = 0;
    string ans = string(n, '+');
    for(auto &c : s) {
        if(c == '0') {
            cntt++;
            ans[cntt-1] = '-';
        } else if(c == '1') {
            cntb++;
            ans[n-cntb] = '-';
        } else {
            cnte++;
        }
    }
    int i = cntt, j = n - cntb - 1;
    while(cnte--) {
        ans[i] = '?';
        ans[j] = '?';
        i++;
        j--;
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