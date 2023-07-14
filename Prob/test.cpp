#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
#define ii pair<int,int> 
#define F first
#define S second
#define all(a) a.begin(),a.end()

int dx[4] = {1,0-1,0};
int dy[4] = {0,-1,0,1};

bool check(int x, int y, int n){
  if(x < 0 || x >= n || y < 0 || y>= n) return 0;
  return 1;
}

void solve(){
  int n;
  cin>>n;
  vector<string> in(n);
  for(int i=0;i<n;i++){
    cin>>in[i];
  }

  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      arr[i][j] = in[i][j] -'0';
    }
  }

  queue<ii> q;
  vector<vector<int>> dist(n,vector<int>(n,1e9));
  int cnt =0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j] == 1){
        q.push({i,j});
        dist[i][j] = 0;
        cnt++;
      } 
    }
  }

  while(!q.empty()){
    auto cur = q.front();
    q.pop();

    for(int i=0;i<4;i++){
      int x = cur.F + dx[i]; int y = cur.S + dy[i];
      if(check(x,y,n) && dist[x][y] > dist[cur.F][cur.S] + 1){
         dist[x][y] =  dist[cur.F][cur.S] + 1;
         q.push({x,y});
      }

    }
  }

  int ans =0;
  int con =0;
  for(int i=0;i<n;i++){
    if(dist[i][i] == 1e9)ans++;
    else con++;
  }
  int left = cnt - con;
  ans += left;
  
  cout << ans << endl;
  
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("error.txt", "w", stderr);
     freopen("output.txt", "w", stdout);
     #endif
    int _t;cin>>_t;while(_t--)
    solve();
    // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
} 