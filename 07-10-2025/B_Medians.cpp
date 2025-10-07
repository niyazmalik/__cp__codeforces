#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n, k;
    cin >> n >> k;
    if(n == 1) {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    if(k == 1 || k == n) {
        cout << -1 << endl;
        return;
    }
    // int r = n - k;
    // int l = k - 1;
    // if(((l & 1) && (r & 1))) {
    //     cout << 3 << endl;
    //     cout << 1 << " " << k << " " << k + 1 << endl;
    // } else if (!(l & 1) && !(r & 1)) {
    //     cout << 5 << endl;
    //     cout << 1 << " " << 2 << " " << k << " " << k + 1 << " " << k + 2 << endl;
    // } else {
    //     cout << -1 << endl;
    // }
    cout << 3 << endl;
    if(!(k & 1)) {
        cout << 1 << " " << k << " " << k + 1 << endl;
    } else {
        cout << 1 << " " << k - 1 << " " << k + 2 << endl;
    }
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