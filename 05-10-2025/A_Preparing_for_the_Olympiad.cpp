#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &ele : a) cin >> ele;
    for(auto &ele : b) cin >> ele;
    int ans = a[n-1];
    for(int i = 0; i + 1 < n; i++) {
        if(a[i] > b[i+1]){
            ans += a[i] - b[i+1];
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