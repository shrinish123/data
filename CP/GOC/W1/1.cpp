#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

void solve(){
  int n,k;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
       arr[i] -=k;
   }
   int ans =0;

   int pre[n];
   map<int,int> mp;

   for(int i=0;i<n;i++){
       if(i) pre[i] = pre[i-1] + arr[i];
       else pre[i] = arr[i]; 
       mp[pre[i]]++;
   }

   for(auto v : mp){
       if(v.first == 0){
           ans+= v.second;
       }
       int cnt = v.second;
        ans += (cnt)*(cnt-1)/2;
   }

  cout<<ans<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int _;cin>>_;
    string temp;
    getline(cin,temp);
    while(_--)
    solve();

}