#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int damage(string s){
    
    int power = 1;
    int dam = 0;
    
    for(ll i = 0 ; i < s.length() ; i++){
        
        if(s[i] == 'C' ){
            power = power*2;
        }else{
            dam = dam+power;
        }
        
    }
    
    return dam;
    
}

int main()
{
    
    int t;
    cin>>t;
    int copy = t;
    
    while(t--){
        
        int d;
        int swaps =0 ;
        string a;
        
        cin>>d>>a;
        
        int cd = damage(a);
        int j;
        while(cd > d){
          int counter = 0;  
            for(ll k = 0 ; k<a.length() -1 ; k++){
                
                if(a[k] == 'C' && a[k+1] == 'S'){
                    counter++;
                    swaps++;
                    a[k] = 'S';
                    a[k+1] = 'C';
                }
                
            }
            
            if(counter == 0){
                j = counter;
                break;
            }
            
            cd = damage(a);
            j = counter;
            
        }
        
        
        if(j == 0 ){
            cout<<"Case #"<<copy-t<<": "<<"IMPOSSIBLE"<<"\n";
        }else{
            cout<<"Case #"<<copy-t<<": "<<swaps<<"\n";
        }
        
        
        
    }
    
    return 0;
    
}