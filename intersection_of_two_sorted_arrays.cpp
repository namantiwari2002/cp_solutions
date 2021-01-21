#include <bits/stdc++.h> 
using namespace std; 

vector<int> printIntersection(int arr1[], int arr2[], int N, int M);  
  
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        
        // Function calling 
        vector<int> v;
        v = printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 
// } Driver Code Ends


/* Function prints Intersection of arr1[] and arr2[] 
N is the number of elements in arr1[] 
M is the number of elements in arr2[] 
Return the array
*/
vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
{ 
    
    map<int , int> mp;
    vector<int> v;
    int j =0;
    
    for(int i =0 ; i<N ; i++){
        
        mp[arr1[i]]++;
        
    }
    
    for(int k = 0 ; k<M-1 ; k++){
        
        if(arr2[k] != arr2[k+1]){
            arr2[j++] = arr2[k];
        }
        
    }
    
    arr2[j++] = arr2[M-1];
    
    for(int f = 0 ; f < j ; f++){
        
        if(mp[arr2[f]] >= 1){
            
            v.push_back(arr2[f]);
            
        }
        
    }

    return v;
    
}
