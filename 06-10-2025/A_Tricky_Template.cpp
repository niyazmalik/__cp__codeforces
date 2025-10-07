#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    for(int i = 0; i < n; i++) {
        if(a[i] != c[i] && b[i] != c[i]) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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