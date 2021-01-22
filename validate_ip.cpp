#include <bits/stdc++.h>
using namespace std;
int isValid(string s);
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << isValid(s) << endl;
    }
    return 0;
}// } Driver Code Ends


/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
int isValid(string s) {
    
    int n = 0;
    char ch ;
    int dot_count = 0;
    if(s[0] == 0){
        
        return false;
    }
    
    // ASCII for 0-9 : 48-57 and for . : 46
    
    for(int i = 0 ; i < s.length() ; i++){
        ch = s[i];
        
        if(s[i] == 48){
            
            if(i ==0 ){
                
                if(s[i+1] != 46){
                    return false;
                }
                
            }else{
                
                if(s[i-1] == 46 && s[i+1] >= 48 && s[i+1] <= 57 ){
                    
                    return false;
                    
                }
                
            }
            
        }
        
      if(s[i] >= 48 && (int)s[i] <= 57 ){
            
            n = n*10 + (int)ch -48;
            
       }else if(s[i] == 46){
           
           if(s[i+1] == 46){
               
               return false;
               
           }
            dot_count++;
            if(n > 255){
                
                return false;
                
            }
            
            n = 0;
            
        } else {
            
            return false;
            
        }
        
        
        
        
        
    }
    
    if(n > 255 || dot_count != 3){
                
                return false;
                
            }
    
    return true;
    
}