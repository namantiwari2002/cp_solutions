#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
   
  ll n;
  cin>>n;
  int a[n];
  
  ll depth = 0;
  ll depthP;
  ll dm = 0 ;
  ll e = 0;
  ll me = 0;
  ll eP;
  
  for(ll i = 0 ; i<n; i++){
      
      cin>>a[i];
      
      if(a[i] == 1){
          depth++;
          e++;
          if(dm < depth){
              dm = depth;
              depthP = i+1;
          }
      }else{
          depth--;
          e++;
      }
      
      if(depth == 0 ){
          
          if(e > me ){
              me = e;
              eP = i  - e + 2;
             
          }
          
           e = 0;
          
      }
      
  }
  
  cout<<dm<<" "<<depthP<<" "<<me<<" "<<eP;
   
  
    
    return 0;
}
