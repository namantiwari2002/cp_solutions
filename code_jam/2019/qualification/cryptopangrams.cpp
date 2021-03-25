
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool is_prime(int n){
    
    for(int i = n/2 ; i<n ; i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
    
}

int one_factor(int n , int prime[]){
    
    for(int i = 0 ; i < 25 ; i++ ){
        
        if(n % prime[i] == 0){
            return i;
        }
        
    }
    
}

int find_prime_index(int n , int prime[]){
    
    for(int k = 0 ; k< 25 ; k++){
        
        if(prime[k] == n){
            return k;
        }
        
    }
    
}

int main()
{
    
    int t;
    cin>>t;
    int copy = t;
    
    while(t--){
        
        int N , L;
        cin>>N>>L;
        
        string s;
        
        int arr[L];
        
        for(int k = 0; k < L ; k++){
            cin>>arr[k];
        }
        
        int prime_map[25] = {0} ;
        int p_in = 25;
        
        char alpha = 'Z';
        
        
        
        
        for(int i = N ; i>0 ; i--){
            
            if(p_in <0){
                break;
            }
            if(is_prime(i)){
                arr[p_in] = i;
                p_in--;
                alpha--;
            }
            
        }
        
        for(int k = 0 ; k < L ; k++){
            
            char a1 = 'A' + one_factor(arr[k] , prime_map);
            
            char a2 = 'A' + find_prime_index(arr[k]/prime_map[one_factor(arr[k] , prime_map)] , prime_map);
            
            s += a1+a2;
            
        }
        
        
        
    }
    
    return 0;
    
}