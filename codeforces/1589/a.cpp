#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;
 
ll mm = 1e6;
ll mod = 1e9+6; 
// int ma = 1e6;
// vector<bool> vis(ma,false);
// vector<vector<int>> adj(ma);
	   
// void dfs(int x){
//     vis[x] = true;
//     for(auto it:adj[x]){
//         if(!vis[it])dfs(it);
//     }
// }
 
 
int main()
{
  
    int t;
    cin>>t;
    // t =1;
    while(t--){
        
      ll u,v;
      cin>>u>>v;
      
      ll y = v*v;
      ll x =  -1*(u*u);
      
      cout<<x<<" "<<y<<endl;
        
    }
    
    return 0;
}