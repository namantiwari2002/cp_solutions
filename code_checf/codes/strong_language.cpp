#include <iostream>
#include <bits/stdc++.h>
using ll = long long ;
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    
    while(t--){
        
        ll n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        ll count = 0;
        
        for(ll i = 0 ; i < n ; i++){
            
            if(s[i] == '*'){
                count++;
               
            }else{
                count = 0;
               
            }
            
            if(count == k){
                cout<<"YES"<<endl;
                break;
            }
            
            
            if(i == n-1){
                cout<<"NO"<<endl;
            }
            
        }
        
        
    }
    
    return 0;
   
}
