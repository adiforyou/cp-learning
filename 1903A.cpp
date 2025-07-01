#include<bits/stdc++.h>
using ll =long long;
using namespace std;
void solve(){
  ll n,k;
  cin>>n>>k;
  vector<ll> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  vector<ll> temp=a;
  sort(temp.begin(),temp.end());
  if(temp==a || k>1){
    cout<<"YES"<<"\n";
  }else{
    cout<<"NO"<<"\n";
  }

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   int t; cin>>t ;while(t--)
    solve();
    
}