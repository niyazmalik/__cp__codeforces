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
    int cnt = count(a.begin(), a.end(), 0);
    if(cnt == n) {
        cout << 0 << endl;
        return;
    }
    int s = -1, e = -1, cnts = 0;
    for(int i = 0; i < n; i++){
        if(s == -1 && a[i]) {
            s = i;
            continue;
        }
        if(a[i]) e = i;
    }
    int ans = 1;
    for(int i = s + 1; i < e; i++) {
        if(!a[i]) {
            ans = 2; 
            break;
        }
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