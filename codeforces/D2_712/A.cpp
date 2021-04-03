#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int bit = 0;
    
    while(t--){
        
        string s;
        cin>>s;
        
        for(int i = 0 ; i < s.size() ; i++){
            
            if(s[i] == 'a'){
                bit = 1;
            }else{
                bit = 0 ;
                break;
            }
            
        }
        
        if(bit == 1){
            cout<<"NO"<<endl;
            continue;
        }
        
        
        if(s[0] != 'a'){
            cout<<"YES"<<endl;
            cout<<s.append("a")<<endl;
            continue;
        }
        
        for(int i = 0 ; i < s.size() ; i++){
            
            if(s[i] != 'a'){
                s.insert(s.size()-i , "a");
                cout<<"YES"<<endl;
                cout<<s<<endl;
                break;
            }
            
        }
        
        
    }

    return 0;
}
