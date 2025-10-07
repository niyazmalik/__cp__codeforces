#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        char a; int b;
        cin >> a >> b;
        if(a == 'P' ) {
            sum += b;
        }
        else {
            cout << (sum + 1 <= b ? "YES" : "NO") << endl;
            if(b > sum) {
                sum = 0;
            }else {
                sum -= b;
            }
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests = 1;
    // cin >> tests;
    while(tests--) {
        run();
    }

    return 0;
}