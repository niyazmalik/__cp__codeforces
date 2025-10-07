#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), k(q);
    for(auto &ele : a) cin >> ele;
    for(auto &ele : k) cin >> ele;

    unordered_map<ll, ll> mp;
    for(int i = 0; i < n; i++) {
        ll seg = 1LL * i * (n - i) + n - i - 1;
        mp[seg]++;
        if(i) {
            mp[1LL * i * (n - i)] += a[i] - a[i-1] - 1;
        }
    }
    for(auto &qq : k) {
        cout << mp[qq] << " ";
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