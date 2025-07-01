#include<bits/stdc++.h>
using ll = long long;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n + 1, 0); 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] <= n) {
            b[a[i]]++;
        }
    }

    int c = 0;
    for (int i = 0; i <= n; ++i) {
        if (b[i] == 0) {
            c = i;
            break;
        }
    }
    if (c == 0 && b[0] > 0) {
        c = n + 1;
    }

    vector<int> d(n + 2, 0); 

    bool e = true;
    
    for (int x = 0; x <= n + 1; ++x) {
        if (!e) {
            break;
        }

        int f;
        if (x == c) {
            f = 0;
        } else {
            if (x <= n) {
                f = b[x];
            } else {
                f = 0;
            }
        }
        
        int g = n - x;

        if (f <= g) {
            d[f]++;
            if (g + 1 <= n + 1) {
                d[g + 1]--;
            }
        }

        if (x <= n && b[x] == 0) {
            e = false;
        }
    }

    vector<int> h(n + 1);
    int i = 0;
    for (int k = 0; k <= n; ++k) {
        i += d[k];
        h[k] = i;
    }

    for (int k = 0; k <= n; ++k) {
        cout << h[k] << (k == n ? "" : " ");
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin >> t; while(t--)
    solve();
    
}