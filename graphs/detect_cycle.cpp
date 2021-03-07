// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    bool DFLUtil(int u , vector<int> adj[] , vector<bool> &visited , int parent){
        
        
        visited[u] = true;
        
        
        for(int i = 0 ; i < adj[u].size() ; i++){
            
            if(visited[adj[u][i]] == false){
                if(DFLUtil(adj[u][i] , adj , visited , u)){
                    return true;
                };
            }else if(visited[adj[u][i]] == true){
                if(adj[u][i] != parent)
                return true;
            }
            
        }
        
    }
	bool isCycle(int V, vector<int>adj[]){
	    
	    vector<bool> visited(V , false);
	  
	    for(int u = 0 ; u<V ; u++){
	        if(visited[u] == false){
	            if(DFLUtil(u , adj , visited , -1)){
	                return true;
	            }
	        }
	    }
	    
	  
	    
	    return false;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends