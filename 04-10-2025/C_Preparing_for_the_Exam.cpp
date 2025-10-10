#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), aa(k);;
    
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < k; i++) {
        cin >> aa[i];
    }
    if(k == n) {
        cout << string(m, '1') << endl;
    } else if(k < n - 1) {
        cout << string(m, '0') << endl;
    } else {
        int missing = 0;
        for(auto ele : aa) {
            missing ^= ele;
        }
        for(int i = 1; i <= n; i++) {
            missing ^= i;
        }
        for(auto ele : a) {
            cout << (missing == ele);
        }
        cout << endl;
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