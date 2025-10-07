#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zz = 0, oo = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            zz++;
            while(s[i+1] == '0') i++;
        } else {
            oo++;
        }
    }
    cout << (oo > zz ? "Yes" : "No") << endl;
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