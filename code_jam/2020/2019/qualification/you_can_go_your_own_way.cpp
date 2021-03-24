#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    
    int t;
    cin>>t;
    int copy = t;
    
    while(t--){
        
        int n;
        string ls;
        
        cin>>n;
        cin>>ls;
        
        string me(ls.size(),' ');
        for(ll i = 0 ; i < 2*n - 2 ; i++){
            
            if(ls[i] == 'S'){
                me[i] = 'E';
            }else{
                me[i] = 'S';
            }
            
        }
        
        cout<<"Case #"<<copy-t<<": "<<me<<endl;
        
    }
    
    return 0;
    
}
