#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    int c = t;
    
    while(t--){
        
        string s;
        cin>>s;
        
        int n = s.length();
        string ans = "";
        
        int depth = 0;
        
        for(int i = 0 ; i<n ; i++){
            
            int diff = (s[i] - '0') - depth;
            
            if(diff > 0){
                string str(diff , '(');
                ans += str;
                ans += s[i];
            }else{
                string str(-1*diff , ')');
                ans += str;
                ans += s[i];
            }
            
            depth += diff;
            
            
        }
        
        if(depth>0){
            string str(depth , ')');
            ans += str;
        }
    
        cout<<"Case #"<<c-t<<": "<<ans<<"\n";
        
        
        
        
    }
    
    return 0;
    
}