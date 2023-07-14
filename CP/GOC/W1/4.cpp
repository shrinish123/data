#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define endl '\n'

const int MOD = 1000000007;

void solve(){
    int n ;

    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans =0;

    for(int i=0;i<63;i++){
        int cnt1 =0;
        for(int j=0;j<n;j++){

            if(arr[j] &(1LL<<i)){
                cnt1++;
            }
        }
        int cnt0 = n -cnt1;
        int pairs = (cnt1%MOD * cnt0%MOD)%MOD;
        int conta = (pairs* (1LL<<i) )%MOD;
        ans =(ans +conta)%MOD;
    }

    cout<<(ans+MOD)%MOD<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int _;cin>>_;
    
    while(_--)
    solve();

}