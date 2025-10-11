#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n;
    cin >> n;
    if(!n) {
        cout << 1 << endl;
        return;
    }
    n = n % 4;
    if(n == 0) n = 4;
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        ans = (ans * 8) % 10;
    }
    cout << ans << endl;
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