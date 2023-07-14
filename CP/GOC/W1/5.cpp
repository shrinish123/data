#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

int n,m,b;
int w[10001];
int s[10001];


void solve(){
   cin>>n>>m>>b;

  for(int i=0;i<n;i++){
      cin>>w[i];
  }
   for(int i=0;i<n;i++){
      cin>>s[i];
  }


 vector<pair<int,int>> fr(m);
  for(int i=0;i<m;i++){
      int p,q;
      cin>>p>>q;
    fr[m] = {p,q};
  }

  




}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int _;cin>>_;
    string temp;
    getline(cin,temp);
    while(_--)
    solve();

}