#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n, m;
    cin >> n >> m;
    // int ans = 0;
    // int prev = -1;
    // bool start = true;
    // for(int i = 0; i < n; i++) {
    //     int a, b;
    //     cin >> a >> b;
    //     int t = a - (i ? prev : 0);
    //     if(start) {
    //         if(b) {
    //             ans += 1 + t - 1 - (t - 1) % 2;
    //             start = !start;
    //         } else {
    //             ans += t - t % 2;
    //         }
    //     } else {
    //         if(!b) {
    //             ans += 1 + t - 1 - (t - 1) % 2;
    //             start = !start;
    //         } else {
    //             ans += t - t % 2;
    //         }
    //     }
    //     prev = a;
    // }
    // int remaining = m - prev;
    // cout << ans + remaining << endl;

    // shoud have used xor for side change checkssss...
    int ans = m;
    int preva = 0, prevb = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int t = a - preva;
        if((b^prevb && !(t & 1)) || (!(b^prevb) && (t & 1))) ans--;
        prevb = b;
        preva = a;
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