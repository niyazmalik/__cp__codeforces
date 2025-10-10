#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int a, x, y;
    cin >> a >> x >> y;
    cout << (((min(x, y) < a && a < max(x, y)) || x == a || y == a) ? "NO" : "YES") << endl;
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