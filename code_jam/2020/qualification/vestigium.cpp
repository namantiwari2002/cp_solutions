#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    
    cin>>t;
    int pp = t;
    
    while(t--){
        int n;
        int trace =0 ;
        cin>>n;
        int qw= n+1;
        int count_r = 0;
        int count_c =0;
        
        int m[n][n];
        
    
        
        for(int i = 0 ; i <n ; i++){
            for(int j = 0 ; j< n ; j++){
                cin>>m[i][j];
            }
        }
        
        for(int k = 0 ; k<n ; k++){
            trace += m[k][k];
        }
        
        for(int l = 0 ; l<n ; l++){
            int arr[qw] = {0};
            int k = 0;
            for(int f =0 ; f<n ; f++){
               arr[m[l][f]]++; 
            }
            
            for(int p =0 ; p<qw ; p++){
                if(arr[p] > 1){
                    k++;
                }
            }
            
            
            if(k != 0){
                count_r++;
            }
            
            arr[n] = {0};
        }
        
        
        
        for(int l = 0 ; l<n ; l++){
            int arr_c[qw] = {0};
            int q = 0;
            for(int f =0 ; f<n ; f++){
               arr_c[m[f][l]]++; 
            }
            
            for(int p =0 ; p<qw ; p++){
                if(arr_c[p] > 1){
                    q++;
                }
            }
            if(q != 0){
                count_c++;
            }
            arr_c[n] = {0};
        }
        
        
        
        
        
        cout << "Case #" << pp-t << ": " << trace << ' ' << count_r << ' ' << count_c << '\n';
        
    }
    
    return 0;
    
}