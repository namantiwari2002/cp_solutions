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
        
       int x,y;
       cin>>x>>y;
       
       if((x+y)%2 == 0){
           if(x>y){
              cout<<(x+y)/2<<" "<<0<<endl; 
           }else{
              cout<<0<<" "<<(x+y)/2<<endl;  
           }
           
       }else{
           cout<<-1<<" "<<-1<<endl;
       }
        
    }
    
    return 0;
}