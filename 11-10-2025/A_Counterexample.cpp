#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    ll l, r;
    cin >> l >> r;
    if(r - l + 1 <= 2) {
        cout << -1 << endl;
        return;
    }
    if((l & 1) && r - l + 1 >= 4) {
        cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
        return;
    }
    if(!(l & 1) && r - l + 1 >= 3) {
        cout << l << " " << l + 1 << " " << l + 2 << endl;
        return;
    }
    cout << -1 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests = 1;
    // cin >> tests;
    while(tests--) {
        run();
    }

    return 0;
}