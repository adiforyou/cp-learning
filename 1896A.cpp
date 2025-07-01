#include<bits/stdc++.h>
using ll =long long;
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    


}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   int t; cin>>t ;while(t--)
    solve();
    
}