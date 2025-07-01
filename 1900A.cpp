#include<bits/stdc++.h>
using ll =long long;
using namespace std;
void solve(){
 ll n;
 cin>>n;
 string s;
 cin>>s;
 ll result=0;
 for(int i=0;i<n;i++){
      if(s[i]=='.'){
            result++;
        }
 }
 for(int i=1;i<n-1;i++){
    if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.'){
        result=2;
    }
 }
 cout<<result<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   int t; cin>>t ;while(t--)
    solve();
    
}