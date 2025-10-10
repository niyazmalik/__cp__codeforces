#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int a[6] = {0};
    for(int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    int xb = a[2] - a[0];
    int yb = a[3] - a[1];
    int xc = a[4] - a[0];
    int yc = a[5] - a[1];
    int ans = 1;
    if((xb > 0 && xc > 0) || (xb < 0 && xc < 0)) {
        ans += min(abs(xb), abs(xc));
    }
    if((yb > 0 && yc > 0) || (yb < 0 && yc < 0)) {
        ans += min(abs(yb), abs(yc));
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