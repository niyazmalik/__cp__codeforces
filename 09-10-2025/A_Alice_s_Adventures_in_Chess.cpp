#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
    for(int i = 0; i < 100; i++) {
        for(auto c : s) {
            if(c == 'N') {
                y++;
            } else if(c == 'S') {
                y--;
            } else if(c == 'E') {
                x++;
            } else {
                x--;
            }
            if(x == a && y == b) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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