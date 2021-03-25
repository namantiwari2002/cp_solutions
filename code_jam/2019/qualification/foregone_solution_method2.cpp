#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    
    int t;
    cin>>t;
    int copy = t;
    
    while(t--){
        
        string n;
        cin>>n;
        
        string A(n.size() , ' ');
        string B(n.size() , ' ');
        
        bool bit_B = false;
        
        for(ll i = 0 ; i < n.size(); i++){
            
            if(n[i] == '4'){
                A[i] = '3';
                B[i] = '1';
                bit_B = true;
            }else{
                
                A[i] = n[i];
                if(bit_B){
                    B[i] = '0';
                }
                
            }
            
         }
         
         cout<<"Case #"<<copy-t<<": "<< A << " " << B <<endl;
        
    }
    
    return 0;
    
}
