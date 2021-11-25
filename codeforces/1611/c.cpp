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
        
    
     int n;
     cin>>n;
     
     vector<int> v(n);
     
     int ma = INT_MIN;
     
     for(int i = 0 ; i<n ; i++){
         cin>>v[i];
         ma = max(ma,v[i]);
     }
     
     int vma = max(v[0],v[n-1]);
     
     if(vma == ma){
         
         cout<<vma<<" ";
         
         if(v[0] == vma){
             
             for(int i = n-1 ; i>0 ; i--){
                 cout<<v[i]<<" ";
             }
             
         }else{
            for(int i = n-2 ; i>=0 ; i--){
                 cout<<v[i]<<" ";
             } 
         }
         cout<<endl;
         
     }else{
         cout<<-1<<endl;
     }
        
    }
    
    return 0;
}
