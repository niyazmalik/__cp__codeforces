#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(auto &ele : p) {
        cin >> ele;
        ele--;
    }
    for(int i = 0; i < n; i++) {
        if(p[p[i]] == i) {
            cout << 2 << endl;
            return;
        }
    }
    cout << 3 << endl;
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