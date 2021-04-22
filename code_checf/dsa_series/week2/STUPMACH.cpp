#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    
   ll t;
   cin>>t;
   
   while(t--){
       
       ll n , x , ans;
       cin>>n>>x;
      
      ans = x;
      
      for(ll i = 1 ; i< n; i++){
          
          ll q;
          cin>>q;
          x = min(x , q);
          ans += x;
          
      }
      
      cout<<ans<<endl;
      
      }
       
         return 0;
       
   }
  
