#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> arr[i] ;
            
        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}
// } Driver Code Ends


//User function template in C++


// arr : given array
// n : size of the array

int firstRepeated(int arr[], int n) {
    
    int min = -1;
    unordered_set<int> uo;
    
    
    
    for(int i = n-1 ; i>=0 ; --i){
        
        if(uo.find(arr[i]) != uo.end()){
            min = i;
        }else{
           uo.insert(arr[i]); 
            
        }
        
    }
    
    if(min != -1){
        return min+1;
        }
    
    return min ;
    
}
