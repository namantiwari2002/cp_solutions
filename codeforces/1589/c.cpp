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
     
     vector<int> a(n);
     vector<int> b(n);
     
     for(int i = 0 ;i<n ; i++)cin>>a[i];
     for(int i = 0 ;i<n ; i++)cin>>b[i];
     
     bool bit = true;
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    for(int i = 0 ;i<n ; i++){
        if(a[i]+1 == b[i] || a[i] == b[i]){
           
        }else{
             bit = false;
            break;
        }
    }
    
     
      if(bit){
          cout<<"YES"<<endl;
      }else{
          cout<<"NO"<<endl;
      }
        
    }
    
    return 0;
}
