#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int g = 0;
    for(int i = 0; i < n; i++) {
        g = gcd(g, a[i]);
    }
    int ans = 0;
    if(g == 1) {
        ans = 0;
    } else if(gcd(g, n) == 1) {
        ans = 1;
    } else if(gcd(g, n - 1) == 1) {
        ans = 2;
    } else {
        ans = 3;
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