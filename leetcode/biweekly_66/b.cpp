using ll = long long;
using ld = long double;

class Solution {
public:
    int minimumBuckets(string s) {
        
        bool bit = true;
        
        int ans = 0;
        
        for(int i = 0 ;i<s.size() ; i++){
            
            if(i == 0){
               
                if(s[i] == 'H'){
                    if(i+1<s.size()){
                        if(s[i+1] == '.'){
                            s[i+1] = 'B';
                            ans++;
                        }else{
                            bit = false;
                        }
                    }else{
                        bit = false;    
                    }
                }
                
            }else if(i == s.size()-1){
                
                if(s[i] == 'H'){
                    if(s[i-1] == '.'){
                        s[i-1] = 'B';
                        ans++;
                    }else if(s[i-1] == 'B'){
                        
                    }else{
                        bit = false;
                    }
                }
                
            }else{
                
                if(s[i] == 'H'){
                    if(s[i-1] != 'B'){
                        if(s[i+1] == '.'){
                            s[i+1] = 'B';
                            ans++;
                        }else if(s[i-1] == '.'){
                            s[i-1] = 'B';
                            ans++;
                        }else{
                            bit = false;
                        }    
                    }else if(s[i-1]=='B'){
                        
                    }
                }
                
            }
            
            if(!bit)break;
            
        }
        
        if(!bit){
            return -1;
        }else{
            return ans;
        }
        
    }
};