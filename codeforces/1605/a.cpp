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
        
    
      ll a1,a2,a3;
      cin>>a1>>a2>>a3;
      
      if(abs(((a1+a3)-2*a2))%3 == 0){
          cout<<0<<endl;
      }else{
          cout<<1<<endl;
      }
        
    }
    
    return 0;
}
