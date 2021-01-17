#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
   
   int sets = n/k ;
   
   for(auto i = 0 ; i <sets ; i++){
       
       reverse(arr.begin() + i*k , arr.begin() + (i+1)*k ); 
       
   }
   reverse(arr.begin() + sets*k , arr.end());
   
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends