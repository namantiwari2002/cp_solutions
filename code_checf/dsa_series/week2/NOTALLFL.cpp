#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll sumA(int f[] , ll k){
    
    ll s = 0;
    
    for(ll i = 0 ; i < k ; i++){
        s += f[i];
    }
    
    return s;
    
}

int main(){
   
  
    ll t;
    cin>>t;
    
    while(t--){
        
      ll n , k;
      cin>>n>>k;
       
      
       
      int f[k] = { 0 };
       
      ll a;
      ll l = 0;
      ll m = 0;
       
      for(ll i = 0 ; i<n ; i++){
           
          cin>>a;
           
          f[a-1] = 1;
         
         
          
          ll sum = sumA(f , k);
 
          
          if(sum == k){
               
            
           
              l = i;
              f[k] = { 0 };
               
            }
              m = max(m , i-l + 1);
            
        }
       
      cout<<m<<endl;
       
        
    }

    return 0;
}
