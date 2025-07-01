#include<bits/stdc++.h>
using ll =long long;
using namespace std;
void solve(){
    int n, k;
    ll j;
    cin >> n >> j >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    j--; 
    int p = a[j];
    
    int b = 0, c = 0, d = 0;
    for(int i = 0; i < n; ++i) {
        if (i == j) continue;
        if (a[i] < p) b++;
        else if (a[i] == p) c++;
        else d++;
    }

    int e = n - k;

    if (b >= e) {
        cout << "YES\n";
        return;
    }

    int f = e - b;
    
    ll g = c;
    if (d > 0) {
        g += (d - 1);
    }

    if (g >= f) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t ;while(t--)
    solve();
    
}