#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    string s; 
    cin >> s;
    int n = s.size();
    set<int> cnt;
    for(int i = 0; i <= n - 4; i++) {
        if(s.substr(i, 4) == "1100") {
            cnt.insert(i);
        }
    }
    int q; 
    cin >> q;
    while(q--) {
        int i, v;
        cin >> i >> v;
        i--;
        s[i] = v + '0';
        for (int j = i - 3; j <= i; j++) {
            if (j >= 0 && j <= n - 4) {
                if (s.substr(j, 4) == "1100") cnt.insert(j);
                else cnt.erase(j);
            }
        }
        if(!cnt.empty()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
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