#include <bits/stdc++.h>
using namespace std;

int main(){
    
    
    int t;
    cin>>t;
    int copy =t;
    
    
    while(t--){
        int end_bit = 0;
        string v;
        vector<int> c(1441 , 0);
        vector<int> j(1441 , 0);
        int n ;
        cin>>n;
        int start[n];
        int end[n];
        
        for(int i = 0 ; i< n ; i++){
            cin>>start[i];
            cin>>end[i];
        }
        
        for(int k = 0 ; k < n ; k++){
            
            if(accumulate(c.begin()+start[k] , c.begin()+end[k] , 0) == 0){
                v.push_back('C');
                for(int l = start[k] ; l<end[k] ; l++ ){
                    c[l]++;
                }
            }else if(accumulate(j.begin()+start[k] , j.begin()+end[k] , 0) == 0){
                 v.push_back('J');
                for(int l = start[k] ; l<end[k] ; l++ ){
                    j[l]++;
                }
            }else{
                end_bit++;
                break;
            }
            
        }
        
        if(end_bit != 0){
            cout<<"Case #"<<copy-t<<": "<<"IMPOSSIBLE\n";
        }else{
            cout<<"Case #"<<copy-t<<": "<<v<<"\n";
       }
        
    }
    
    return 0;
    
}