#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n;
    cin >> n; 
    string s;
    cin >> s;
    // string ans = "";
    // int i = n - 1;
    // if(s[0] == '9') {
    //     if(i == n - 1) {
    //         while(s[i] <= '1') {
    //             ans += '1' - s[i] + '0';
    //             i--;
    //         }
    //         ans += 11 - (s[i] - '0') + '0';
    //     }
    //     ans += 10 - (s[i] - '0') + '0';
    // } else {
    //     for(int i = n - 1; i >= 0; i--) {
    //         ans += '9' - s[i] + '0';
    //     }
    // }
    string a, ans;
    a = s[0] != '9' ? string(n, '9') : string(n+1, '1');
    reverse(s.begin(), s.end());
    int rem = 0;
    for(int i = 0; i < n; i++) {
        int num = a[i] - s[i] - rem;
        if(num < 0) {
            num += 10;
            rem = 1;
        } else {
            rem = 0;
        }
        ans += '0' + num;
    }
    reverse(ans.begin(), ans.end());
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