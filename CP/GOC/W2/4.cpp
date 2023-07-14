#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

int n,k;
int arr[100100];

int rec(int i,int k){
    
}

void solve(){
   cin>>n>>k;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    int ans =0;
   for(int i=0;i<n;i++){
     ans = max(ans,rec(i,k));
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