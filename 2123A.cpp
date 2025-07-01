#include<bits/stdc++.h>
using ll =long long;
using namespace std;
void solve(){
    int  n;
    cin>>n;
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
    
    int q = n / 4;
    c0 = q;
    c1 = q;
    c2 = q;
    c3 = q;
    
    int r = n % 4;
    if (r > 0) {
        c0++;
    }
    if (r > 1) {
        c1++;
    }
    if (r > 2) {
        c2++;
    }

    if (c0 == c3 && c1 == c2) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t ;while(t--)
    solve();
    
}