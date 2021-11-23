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

bool ans = false;
ll a,b,x;
void check(ll a, ll b){
    
    if(a == x || b == x){
        ans = true;
        return;
    }
    
    if((a-x)%b == 0){
        ans = true;
        return;
    }
    
    if (a % b == 0)return;
	if (a % b < x and b < x)return;
	check(b, a % b);
    
}

int main()
{
  
    int t;
    cin>>t;
    // t =1;
    while(t--){
        
    
       cin>>a>>b>>x;
       
       if(b>a)swap(a,b);
    
       if(x > max(a,b)){
           cout<<"NO"<<endl;
           continue;
       }
       if(a == x || b == x || (max(a,b)-x)%min(a,b) == 0){
           cout<<"YES"<<endl;
           continue;
       }
       
       check(a,b);
       
       if(ans){
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
       
       ans = false;
        
    }
    
    return 0;
}
