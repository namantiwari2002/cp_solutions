#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    string given = "party";
    string rw= "pawri";
    int index;
    int pos = 0;
    string str; 
       string copy_s;
    cin>>t;
    
    while(t--){
         
        pos = 0;
       cin>>str;
       copy_s.assign(str);
       
        while((index = str.find(given , pos)) != string::npos){
            
            str.replace(index , index+5 , rw);
            pos = index +1;
            
        }
        
       
        
        if(str.length() < copy_s.length()){
            int k = str.length();
            str.append(copy_s.begin() + k  , copy_s.end());
            cout<<str<<endl;
        }else{
            cout<<str<<endl;
        }
        
        
    }
    
    return 0;
   
}