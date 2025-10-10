#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    string s;
    cin >> s;
    
    for(int i = 1; i < s.length(); i++) {
        if(s[i-1] == s[i]) {
            cout << s.substr(i-1, 2) << endl;
            return;
        }
    }
    for(int i = 1; i + 1 < s.length(); i++) {
        if(s[i-1] != s[i+1]) {
            cout << s.substr(i-1, 3) << endl;
            return;
        }
    }
    cout << "-1" << endl;
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