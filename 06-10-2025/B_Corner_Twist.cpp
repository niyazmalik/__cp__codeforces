#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long;

void run() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> a(n, vector<int>(m)), b(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            a[i][j] = s[j] - '0';
        }
    }
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            b[i][j] = s[j] - '0';
        }
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < m - 1; j++) {
            if((a[i][j] + 1) % 3 == b[i][j]) {
                a[i][j] = (a[i][j] + 1) % 3;
                a[i+1][j+1] = (a[i+1][j+1] + 1) % 3;
                a[i+1][j] = (a[i+1][j] + 2) % 3;
                a[i][j+1] = (a[i][j+1] + 2) % 3;
            } else if((a[i][j] + 2) % 3 == b[i][j]) {
                a[i][j] = (a[i][j] + 2) % 3;
                a[i+1][j+1] = (a[i+1][j+1] + 2) % 3;
                a[i+1][j] = (a[i+1][j] + 1) % 3;
                a[i][j+1] = (a[i][j+1] + 1) % 3;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j= 0; j < m; j++) {
            if(a[i][j] != b[i][j]) {
                cout << "NO" << endl;
                return;
            }
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