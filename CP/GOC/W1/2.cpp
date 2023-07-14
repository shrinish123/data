#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'
 int n,d;



bool check(int i,int j,int x,int y){
    if(x < 0 || x >= n || y < 0 || y >= n  || abs(x-i) + abs (y-j) > d ) return 0;
   else  return 1;
}

void solve(){
 
  cin>>n>>d;
  vector<string> arr(n);

  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  vector<string> ans(n);

  for(int i=0;i<n;i++){
      string row;
     for(int j=0;j<n;j++){
        row+= '.';
     }
     ans[i] = row;
  }

  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(arr[i][j] == '#'){
           
           for(int l = i-d ; l<= i+d;l++){
               for(int k = j-d;k<= j+d;k++){
                   if(check(i,j,l,k)){
                       ans[l][k] = 'x';
                   }
               }
           }
        }
      }
  }


  for(int i=0;i<n;i++){
      cout<<ans[i]<<endl;
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