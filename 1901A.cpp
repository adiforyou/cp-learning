#include<bits/stdc++.h>
using ll =long long;
using namespace std;
void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll> a;
    a.push_back(0);
    for(int i=0;i<n;i++){
        ll point;
        cin>>point;
        a.push_back(point);
    }
    a.push_back(x);
    n=a.size();

    ll md=INT_MIN;
    for(int i=1; i<n;i++){
        if(i==n-1){
            md=max(md,2*(a[i]-a[i-1]));
        }else{
            md=max(md,a[i]-a[i-1]);
        }
    }
    cout<<md<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   int t; cin>>t ;while(t--)
    solve();
    
}