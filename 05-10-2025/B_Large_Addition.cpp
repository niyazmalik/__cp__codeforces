#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    string x;
    cin >> x;
    if(x[0] > '1' || x[x.length()-1] == '9') {
        cout << "NO" << endl;
        return;
    }
    for(int i = 1; i < x.length() - 1; i++) {
        if(x[i] == '0') {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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