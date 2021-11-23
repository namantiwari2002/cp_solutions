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
        
       int n,a,b;
       cin>>n>>a>>b;
       
        vector<int> pa;
        vector<int> pb;
        
        bool bit = false;
       
        for(int i = 1 ; i<=n ; i++){
            
            if(i>a && i != b && i != a)pa.push_back(i);
            if(i<b && i != a && i != b)pb.push_back(i);
            
        }
        
        if(pa.size()+1 >= n/2 && pb.size()+1 >= n/2){
            bit = true;
        }
        
        if(bit){
            
            vector<bool> vis(n+1,false); 
            
            sort(pa.begin(),pa.end(),greater<int>());
            sort(pb.begin(),pb.end());
            
            cout<<a<<" ";
            for(int i = 0; i<(n/2- 1) ; i++){
                cout<<pa[i]<<" ";
            }
            cout<<b<<" ";
            
            for(int i = 0; i<(n/2- 1) ; i++){
                cout<<pb[i]<<" ";
            }
            
            cout<<endl;
            
        }else{
            cout<<-1<<endl;
        }
        
    }
    
    return 0;
}
