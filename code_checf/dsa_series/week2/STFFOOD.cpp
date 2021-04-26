#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   
   int t;
   cin>>t;
   
   while(t--){
       
       int n;
       cin>>n;
       
       int s[n] , p[n] ,v[n];
       int m = 0;
       for(int i = 0 ; i<n ; i++){
           cin>>s[i]>>p[i]>>v[i];
           
           m = max(m , (p[i]/(s[i]+1))*v[i]);
           
       }
       
         cout<<m<<endl;
       
   }
   
    return 0;
}
