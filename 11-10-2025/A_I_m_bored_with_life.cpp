#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    int ans = 1;
    for(int i = 2; i <= mn; i++) {
        ans *= i;
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