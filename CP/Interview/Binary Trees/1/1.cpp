#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
#define ii pair<int,int> 
#define F first
#define S second
#define all(a) a.begin(),a.end()

class node{
    public: 
    int data; 
    node* left;
    node* right; 
    
    node(int val){
        this -> data = val;
        this -> left = NULL;
        this -> right = NULL;
    } 
};

node* buildTree(node* root){

    int x; cin>>x;

    root = new node(x);

    if( x  == -1){
        return NULL;
    }

    root->left = buildTree(root->left);
    root->right = buildTree(root->right);

    return root;
}


void solve(){
  
  node *root = NULL;

  root = buildTree(root);

  cout << root-> data << endl;
  
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //  #ifndef ONLINE_JUDGE
    //  freopen("input.txt", "r", stdin);
    //  freopen("error.txt", "w", stderr);
    //  freopen("output.txt", "w", stdout);
    //  #endif
    // int _t;cin>>_t;while(_t--)
    solve();
    // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}