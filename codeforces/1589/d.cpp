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

ll query(ll l, ll r){
    
    cout<<" ? "<<l<<" "<<r<<endl;
    ll ans;
    cin>>ans;
    return ans;
    
}

int main()
{
  
    int t;
    cin>>t;
    // t =1;
    while(t--){
        
        ll n;
        cin>>n;
    
        ll total = query(1,n);
        ll l,r,mid;
        
        l = 1;
        r = n;
        
        while(r>l+1){
            mid = (l+r)/2;
            if(query((ll)1,mid) == total){
                r = mid;
            }else{
                l = mid;
            }
        }
        
        ll k = r;
        
        ll dif1 = query(1,k) - query(1,k-1);
        ll j = k-dif1;
        ll i;
        if(j == 2){
            i = 1;
        }else{
         ll dif2 = query(1,j-1) - query(1,j-2);
        
         i = j-1-dif2;
        }
        
        cout<<" ! "<<i<<" "<<j<<" "<<k<<endl;
    
        
    }
    
    return 0;
}
