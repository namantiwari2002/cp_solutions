#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    
    vector<int> v;
    map<int , int> mp;
    for(int i = 0 ; i<n ; i++ ){
        
        mp[arr1[i]]++;
        
    }
    
    for(int j = 0 ; j<m ; j++ ){
        
        mp[arr2[j]]++;
        
    }
    
    for(auto k = mp.begin() ; k != mp.end() ; k++){
        
        v.push_back(k->first);
    }
    
    return v;
    
    
    
    
}

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}