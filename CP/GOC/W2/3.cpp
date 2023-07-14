#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

int n,k;
int arr[100100];

bool check(int x){
    int cnt =0;
    int left = 0;
    for(int i=0;i<n;i++){
       if(left -arr[i] <0){
           cnt++;
           left =x -arr[i];
       }else{
           left =left-arr[i];
           
       }
    }
    return cnt <= k;
}

void solve(){
  cin>>n>>k;
  int lo =0;
  int hi =0;
  for(int i=0;i<n;i++){
      cin>>arr[i];
      lo = max(lo,arr[i]);
      hi += arr[i];
  }
  int ans =hi;
  while(lo<=hi){
      int mid = (lo+hi)/2;

      if(check(mid)){
        ans = mid;
        hi = mid-1;
      }else{
          lo =mid+1;
      }
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