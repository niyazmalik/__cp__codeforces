#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    string s;
    cin >> s;
    int a = s[0] - '0';
    int b = s[2] - '0';
    if(a > b && s[1] != '>') s[1] = '>';
    else if(a < b && s[1] != '<') s[1] = '<';
    else if(a == b && s[1] != '=') s[1] = '=';
    
    cout << s << endl;
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