#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int mx = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            mx = max(mx, a[i][j]);
        }
    }
    vector<int> r(n), c(m);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == mx) {
                cnt++;
                r[i]++;
                c[j]++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(r[i] + c[j] - (a[i][j] == mx) == cnt) {
                cout << mx - 1 << endl;
                return;
            }
        }
    }
    cout << mx << endl;
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