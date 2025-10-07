#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n;
    cin >> n;
    vector<ll> p(n);
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(!i) p[0] = a[0];
        else p[i] = p[i-1] + a[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] & 1) cnt++;
        if(!i) cout << p[i] << " ";
        else cout << p[i] - cnt / 3 - (cnt % 3 == 1) << " ";
    }
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