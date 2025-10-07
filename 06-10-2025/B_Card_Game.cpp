#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int win = 0;
    for(int i = 0; i < 2; i++) {
        if((a > c && b >= d) || (a >= c && b > d)) win++;
        swap(a, b);
    }
    cout << 2 * win << endl;
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