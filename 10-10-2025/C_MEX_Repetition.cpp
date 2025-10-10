#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n, k;
    cin >> n >> k;
    ll miss = 1LL * n * (n + 1) / 2;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        miss -= a[i];
    }
    int kk = k % (n + 1);
    if(!kk) {
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    kk--;

    for(int i = n - kk; i < n; i++) cout << a[i] << " ";
    cout << miss << " ";
    for(int i = 0; i < n - kk - 1; i++) cout << a[i] << " ";
    cout << endl;
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