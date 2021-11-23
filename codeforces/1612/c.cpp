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
        
       ll k,x;
       cin>>k>>x;
       
       ll ans = 0;
       
       if(x >= k*k){
         ans = 2*k-1;
      
           
       }else if(x <= (k*(k+1))/2){
           
           ll l = 0;
           ll r = k;
       
       while(r>l+1){
           
           ll mid = (r+l)/2;
           
           ll mm = (mid*(mid+1))/2;
           
           if(mm>=x){
               r = mid;
           }else{
               l = mid;
           }
           
       }
       ans = r;
           
       }else{
          
        
           ll l = 0;
           ll r = k-1;
       
       while(r>l+1){
           
           ll mid = (r+l)/2;
           ll temp = k-mid;
           ll val = k*k - (temp * (temp - 1)) / 2;
         
           
           if(x<=val){
               r = mid;
           }else{
               l = mid;
           }
           
         
           
       }
       
         ans = r+k;
       
    //   if((l*(l+1))/2 == x){
    //       ans +=l;
    //   }else{
    //   ans += r;
    //   }
   
       
       }
       
       cout<<ans<<endl;
        
    }
    
    return 0;
}
